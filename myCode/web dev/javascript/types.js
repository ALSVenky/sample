// primitive Types
//    Number
//    String
//    Boolean
//    null
//    undefined

var amount = 222;
var customerName = "Key";
var isValid = true;
var object = null;
var b = undefined;
var v; //declaring nothing means that it is undefined.

document.write(amount+"<br>");
document.write(customerName+"<br>");
document.write(isValid+"<br>");
document.write(object + "<br>");
document.write((object === null) +"<br/>"); //another pair of brackets are must
document.write((object === 123) +"<br/>");
document.write(b +"<br>");
document.write(v +"<br>" + "<hr>");

document.write(typeof amount+"<br>"); //typeof operator tells the type of that variable.
document.write(typeof (object === null) +"<br/>");
document.write(typeof object + "<br>" + "<hr>");

//difference btw === and ==
var x = 123;
var y = "123";
var z = 123;
var w = 456;
document.write((x==y) + "<br>"); //here == operator converts the string in y to numeric and then it does the comparison.
document.write((x==z) + "<br>");// here both the value and data type are same.
document.write((x===z) + "<br>");
document.write((x==w) + "<br>"); //here the value not equal but the type of data is same.
document.write((x===w) + "<br>"); //here the value not equal but the type of data is same.
document.write((x===y) + "<hr>"); //but here === operator compares without converting them, as these two are differnt datatypes it prints false.

// there are many methods on primitive types.
var quote = "JavaScript2002";
document.write(quote.toLowerCase() + "<br>");
document.write(quote.charAt(4) + "<br>");
document.write(quote.substr(9,2) + "<br>"); //9th letter includes and 2 is the length of string.
document.write(quote.slice(9,11) + "<hr>"); //9th letter included and 11th letter is not included.
