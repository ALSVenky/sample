const express = require("express");
const bodyParser = require("body-parser");
const app = express();
const request = require("request");

app.use(express.static("public"));
app.use(bodyParser.urlencoded({extended  : true}));
app.get("/", function(req,res){
  res.sendFile(__dirname + "/signup.html");
})

app.post("/", function(req, res){
   const firstName = req.body.firstname;
   const lastName = req.body.lastname;
   const email = req.body.email;
    console.log(firstName);
})

app.listen(3000, function(req, res){
  console.log("server is running on port 3000");
})


d8523f28306a3b30fa15df8ff68c3927-us20
