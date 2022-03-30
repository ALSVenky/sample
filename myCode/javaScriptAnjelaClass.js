
//var comment = prompt("enter the comment");
//var comment_length = comment.length;
//alert( prompt("enter the comment").slice(0,10) );
//alert("your comment length is " + comment_length + " characters." + " Remaining characters = " +  (140-comment_length) );
/*var name = prompt('enter your name');
 
alert('Hello '+ name[0].toUpperCase()+name.slice(1,).toLowerCase() );*/
/*var dogAge= prompt("enter your dog age");
//var humanAge = (dogAge-2)*4+21 ;
alert("humanAge = " + ((dogAge-2)*4+21));*/
//ctrl+f is used to find and change the words 
/*var money = (prompt("enter the money"));
function getMilk(money) {   
  console.log("leaveHouse");
  console.log("moveRight");
  console.log("moveRight");
  console.log("moveUp");
  console.log("moveUp");
  console.log("moveUp");
  console.log("moveUp");
  console.log("moveRight");
  console.log("moveRight");
  console.log("buy milkbottles for " + money);
  console.log("moveLeft");
  console.log("moveLeft");
  console.log("moveDown");
  console.log("moveDown");
  console.log("moveDown");
  console.log("moveDown");
  console.log("moveLeft");
  console.log("moveLeft");
  console.log("enterHouse");
  //var noOfBottles = Math.floor(money/1.5);
  console.log("return " +Math.floor(money/1.5) + " bottles");
  return change= (money%1.5);
}
  getMilk(money)
  10
/*function lifeInWeeks(age) {  
 
 var days = age*365;
 var months = age*12;
 var weeks = age*52;
 

  alert("you have " + (90*365-days)+ "days, " + (90*52 -weeks) + "weeks, " + (90*12-months) + "months left." );
   
}
lifeInWeeks(51)*/

/*
    === ~equals
    !== ~notequals
    <<  ~lessthan
    >>  ~greaterthan
    <=  ~lessthanorequals
*/

/*var bmi = Math.round(bmiCalculator(65, 1.8));
function bmiCalculator(weight,height){
    // height = prompt("enter your height in metres");
    // weight = prompt('enter your weight in kgs');
     return(weight/(height*height));
}*/
// var l = Math.random();
// console.log(l);

/* prompt("enter the boy name: ");
  prompt("enter the girl name: ");
 // p = Math.random()*100 ;
 q = Math.floor(Math.random()*100)+1;
  alert("Your love score is " + q );*/

 /* a= 1;
  b='1';
  if(a==b) 
  {
    console.log('yes');
  } else
  {
    console.log('no');
  }
  a= 1;
  b='1';
  if(a===b) 
  {
    console.log('yes');
  } else
  {
    console.log('no');
  }*/
/*function bmiCalculator(weight,height)  {
 var bmi= (weight/(height*height)) ;
 var bmi1 = "Your BMI is "+bmi+", so you are underweight." ;
 var bmi2 = "Your BMI is "+bmi+", so you have a normal weight." ;
 var bmi3 = "Your BMI is "+bmi+", so you are overweight." ;
   if (bmi<18.5) {
      return (bmi1);
   }
      if ( bmi>18.5 && bmi<24.9 ) {
          return (bmi2);
      }
      if (bmi>24.9) {
          return (bmi3);
      }
}
*/
   /*
 function isLeap(year) {  
if (year%4===0){
    if (year%100===0) {
        if (year%400===0){
            return "Leap year.";
        }else { 
            return "Not leap year." ;
            
        }
        
    } else {
        return "Leap year." ;
    }
} else {
    return "Not leap year." ;
}  

}  */
  
/*    var friendsList = ["key", "ill", "kovi", "maggi"];
 var name = prompt(" enter your name : ");
 var entry = friendsList.includes(name);
 if (entry) {
   console.log("Welcome "+ name);
 } else {
   console.log("Sorry " + name + " may be next time.")
 }  */

 // array.push(item);  ~adds the item in array at last place
 //array.pop; ~remove the last element from the array

/*
 var output = [];
  var count =1;
function FizzBuzz(){

if ((count%3===0)&&(count%5===0)) {
  output.push("FizzBuzz");
   }
   else if (count%5===0) {
  output.push("Buzz");
   }
   else if (count%3===0) {
  output.push("Fizz");
   }
   else {
    output.push(count);
      
   }
   count+=1;
  console.log(output);
 
 }
 */

/*
   function whosPaying(names) {
    names = ["Angela", "Ben", "Jenny", "Michael", "Chloe"];
   var N = names[Math.floor(Math.random()*names.length)];
   return N + " is going to buy lunch today!";
   }
*/

/*
function HouseKeeper (name,age,languages){
  this.name = name;
  this.age = age;
  this.languages = languages;
  this.clean = function () {
    alert ("cleanig in progress..");
  }
}
var houseKeeper1 = new HouseKeeper("water", 20, ["telugu", "english"]);
*/