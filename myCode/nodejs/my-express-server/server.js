const express = require("express");

const app = express();

app.get("/about", function(request, responce){
  // console.log(request)
  // responce.send("<marquee><h1>Hello.......</h1></marquee>");
  responce.send("This is ALSVenky from NIT Trichy.");
});

app.get("/", function(request, responce){
  responce.send("<marquee><h1>Hello..There..</h1></marquee>");

});

app.listen(3000, function(){
  console.log("server started at port 3000");
});
