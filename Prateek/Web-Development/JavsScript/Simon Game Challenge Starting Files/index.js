$("body").on("keypress",function(){
    // startFromZero();
})


$(".btn").on("click",function(event){
    var temp = event.currentTarget.className;
    var number = colorCode(temp);
    afterClick(temp);
});


function startGame(){
    var level = 1;
    var pattern = g
}

function afterClick(number){
    
}


function colorCode(temp){
    switch(temp){
        case "btn green": return 1;
        case "btn red": return 2;
        case "btn yellow": return 3;
        case "btn blue": return 4;
        return -1;    
    }
}





// function handleClick(classNames){
//     switch(classNames){
//         case "btn green":
//             animation("green");
//             return 1;
//         case "btn red":
//             animation("red");
//             return 2;
//         case "btn yellow":
//             animation("yellow");
//             return 3;
//         case "btn blue":
//             animation("blue");
//             return 4;
//         default: break;
//     }
// }


// Giving Sound 

// function sound(colorCode){
//     var color = "";
//     if(colorCode==1){
//         color = "green";
//     }
//     else if(colorCode==2){
//         color = "red";
//     }
//     else if(colorCode==3){
//         color = "yellow";
//     }
//     else if(colorCode==4){
//         color = "blue";
//     }
//     else color = "wrong";
//     var audio = new Audio("./sounds/"+color+".mp3");
//     audio.play();
// }
// Giving Animation 

// function animation(color){
//     $("."+color).addClass("pressed");
//     setTimeout(function(){
//         $("."+color).removeClass("pressed");
//     },100);
// }


// GENERATIN RANDOM NUMBER AND RETURNING THE PATTERN

// function generatePattern(level){
//     var pattern  = [];
//     for(var i = 0; i<level; i++){
//         var randomNumber = Math.random()*4;
//         randomNumber = Math.ceil(randomNumber);
//         if(randomNumber==1){
//             animation("green");
//         }
//         else if(randomNumber==2){
//             animation("red");
//         }
//         else if(randomNumber==3){
//             animation("yellow");
//         }
//         else{
//             animation("blue");
//         }
//         pattern.push(randomNumber);
//         sound(randomNumber);
//     }
//     return pattern;
// }

