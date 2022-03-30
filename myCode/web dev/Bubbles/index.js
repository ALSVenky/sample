

function createBubbles(){
  const section = document.querySelector('section');
  const createElement = document.createElement('span');
  var size = Math.random()*60;

  createElement.style.width= 20+size+'px';
  createElement.style.height= 20+size+'px';
  createElement.style.left= Math.random()*innerWidth+'px';
  section.appendChild(createElement);
  setTimeout(() =>{
    createElement.remove()
  },4000);
}
setInterval(createBubbles,50);




// var min,sec,ms,count, malt, salt, msalt;
//
// var stopwatch = {
//   start: function(){
//     if(document.getElementById("start").firstChild.nodeValue != "Start"){
//       document.getElementById("start").firstChild.nodeValue = "Start";
//     }
//     ms = 0;
//     sec = 0;
//     min = 0;
//     count = setInterval(function(){
//       if(ms == 100){
//         ms = 0;
//         if(sec == 60){
//           sec = 0;
//           min++;
//         }
//         else{
//           sec++;
//         }
//       }
//       else{
//         ms++;
//       }
//
//       malt = stopwatch.pad(min);
//       salt = stopwatch.pad(sec);
//       msalt = stopwatch.pad(ms);
//
//       stopwatch.update(malt + ":" + salt + ":" + msalt);
//     }, 10);
//     },
//   stop: function(){
//     clearInterval(count);
//  document.getElementById("start").firstChild.nodeValue = "Restart";
//   },
//
//   update: function(txt){
//      var temp = document.getElementById("timer");
//   temp.firstChild.nodeValue = txt;
//   },
//
//   pad: function(time){
//     var temp;
//     if(time < 10){
//       temp = "0" + time;
//     }
//     else{
//       temp = time;
//     }
//     return temp;
//   }
// }
