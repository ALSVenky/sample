const express = require("express");
const bodyParser = require("body-parser");
const https = require("https");
const app = express();
app.use(bodyParser.urlencoded({ extended  : true}));
app.get("/", function(req, res){
  res.sendFile(__dirname + "/index.html");
});
app.post("/", function(req, res){

  const query = req.body.cityName;
  const units = req.body.units;

  const url = "https://api.openweathermap.org/data/2.5/weather?q="+ query +"&appid=e578365a873633ba5bb882e0bef75181&units= " +units;
  https.get(url, function(responce){
    console.log(responce.statusCode);
    console.log(responce.statusMessage);
    responce.on("data", function(data){
      // we are using a method called "on" to fetch the data.
      const weatherData = JSON.parse(data);
      // The data that comes is not in json, so we are using above line.
      // if you want to convert json notation to string use json.stringify();
      // console.log(weatherData);
      // console.log(JSON.stringify(weatherData));
      const temp = weatherData.main.temp -275;
      // console.log(temp);
      const description = weatherData.weather[0].description
      // console.log(description);
      const icon = weatherData.weather[0].icon
      const imageURL = "http://openweathermap.org/img/wn/" + icon + "@2x.png"

      res.write('<head><meta charset="utf-8"></head>');
      res.write("<h1>The temperature at location is " + temp + " degrees "+ units +".</h1><br>");
      res.write("The weather is currently "+ description +".");
      res.write("<img src="+ imageURL +">");

      res.send();
      // we can only use one res.send, so we are using res.write.
    })
  })
  // res.send("server is running..");


}) ;



app.listen(9000, function(req, res){
  console.log("Server is running in port  9000.");
})
