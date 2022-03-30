var functions = "Functions";
document.write(functions + "<br>");
//we can write functions in 2 ways: 1.Declaration  2. Expression
//Declaration type Example
function evenOrOdd(num){
          if(num%2==0){
            return "Even";
          } else{
            return "odd";
          }
}
document.write(evenOrOdd(5) + "<br>");

//Expression type Example

var evenOrOdd2 = function (num){
  if (num%2==0){
    return "even";
  }else {
    return "Odd";
  }
}; //semicolon important, as we know that every expression in js should end with semicolon.
//here the function doesnot have any name, we are assigning it to a variable.
//where as in declaration type we do have a name and it doesnot end with semicolon.
document.write(evenOrOdd2(10) + "<hr>");

//declaration type function
document.write(evenOrOdd(5) + "<hr>");

function evenOrOdd(num){
          if(num%2==0){
            return "Even";
          } else{
            return "odd";
          }
}

//here, even though we invoke the function before Declaring the function , it gives the output.
//so, in this case function hoisting happens, no matter in which order you invoke the function
//expression type function
document.write(evenOrOdd3(10) + "<hr>");

var evenOrOdd3 = function (num){
  if (num%2==0){
    return "even";
  }else {
    return "Odd";
  }
};

//here, if you invoke the function before expressing the function it doesnt give you the output.
//it gives an error in the console, error is "evenOrOdd2 is not a function".


//passing functions to arguments

const points = [40, 100, 1, 5, 25, 10];
points.sort(function(a, b){return a-b});
document.write(points);
