for ( var i=0; i<(document.querySelectorAll(".drum").length);i++){

document.querySelectorAll("button")[i].addEventListener("click", function(){


   copy(this.innerHTML);


});
}

document.addEventListener("keypress" , function(event) {

copy(event.key);


});


function copy(key){
     switch (key) {
       case "A":
       var crash = new Audio("sounds/crash.mp3");
       crash.play();
       break;

       case "L":
       var tom2 = new Audio("sounds/tom-2.mp3");
       tom2.play();

         break;

         case "S":
         var crash = new Audio("sounds/crash.mp3");
         crash.play();

         break;

         case "V":
         var tom4 = new Audio("sounds/tom-4.mp3");
         tom4.play();

         break;

         case "e":
         var tom3 = new Audio("sounds/tom-3.mp3");
         tom3.play();

         break;

         case "n":
         var snare = new Audio("sounds/snare.mp3");
         snare.play();

         break;

         case "k":
         var tom1 = new Audio("sounds/tom-1.mp3");
         tom1.play();

         break;

         case "y":
         var kick = new Audio("sounds/kick-bass.mp3");
         kick.play();

         break;

       default: console.log(this.innerHTML);

     }
   }
