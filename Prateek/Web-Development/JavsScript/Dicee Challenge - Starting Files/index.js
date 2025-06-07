var random = Math.random();
random*=6;
random = Math.ceil(random);
var random2 = Math.random();
random2*=6;
random2 = Math.ceil(random2);

var imagesource = "./images/dice"+random+".png";
var imagesource2 = "./images/dice"+random2+".png";

document.querySelector(".img1").setAttribute("src",imagesource);
document.querySelector(".img2").setAttribute("src",imagesource2);

if(random==random2){
    document.querySelector("h1").textContent = "It's a draw";
}
if(random>random2){
    document.querySelector("h1").textContent = "🚩 Player 1 wins!!";
}
if(random<random2){
    document.querySelector("h1").textContent = " Player 2 wins!! 🚩";
}
// if(random==1){
//     document.querySelector(".img1").setAttribute("src","./images/dice1.png");
// }
// if(random==2){
//     document.querySelector(".img1").setAttribute("src","./images/dice2.png");
// }
// if(random==3){
//     document.querySelector(".img1").setAttribute("src","./images/dice3.png");
// }
// if(random==4){
//     document.querySelector(".img1").setAttribute("src","./images/dice4.png");
// }
// if(random==5){
//     document.querySelector(".img1").setAttribute("src","./images/dice5.png");
// }
// if(random==6){
//     document.querySelector(".img1").setAttribute("src","./images/dice6.png");
// }
// if(random2==1){
//     document.querySelector(".img2").setAttribute("src","./images/dice1.png");
// }
// if(random2==2){
//     document.querySelector(".img2").setAttribute("src","./images/dice2.png");
// }
// if(random2==3){
//     document.querySelector(".img2").setAttribute("src","./images/dice3.png");
// }
// if(random2==4){
//     document.querySelector(".img2").setAttribute("src","./images/dice4.png");
// }
// if(random2==5){
//     document.querySelector(".img2").setAttribute("src","./images/dice5.png");
// }
// if(random2==6){
//     document.querySelector(".img2").setAttribute("src","./images/dice6.png");
// }