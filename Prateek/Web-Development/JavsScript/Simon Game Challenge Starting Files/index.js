// CONVERTS CLASSES TO COLOR
function classesToColor(classes){
    switch(classes){
        case "btn green":
            return "green";
        case "btn red":
            return "red";
        case "btn yellow":
            return "yellow";
        case "btn blue":
            return "blue";
            default:
        return "wrong";
    }
}

// CONVERTS NUMBER TO COLOR 
function numToColor(n){
    switch(n){
        case 1: return "btn green";
        case 2: return "btn red";
        case 3: return "btn yellow";
        case 4: return "btn blue";
        case -1: return "wrong";
    }
}



// INITIALISING ELEMENTS
let gamePattern = [];
let userIndex = 0;
let level = 1;
let allowKeyPress = true;
if(allowKeyPress){
    $(".btn").css("pointer-events","none");
}
else{
    $(".btn").css("pointer-events","auto");
}


// PLAYS SOUND
function playSound(classes){
    let color = classesToColor(classes);
    var audio = new Audio("./sounds/"+color+".mp3");
    setTimeout(function(){
        audio.play();

    },100);
}

// SHOWS ANIMATION
function animation(classes){
    let color = classesToColor(classes);
    $("#"+color).addClass("pressed");
    setTimeout(function(){
        $("#"+color).removeClass("pressed");
    },100);
}

// GENERATE PATTERN
function generatePattern(n){
    var pattern = [];

    $(".btn").css("pointer-events","none");
    for(let i = 0 ;i<n; i++){
        let randomNum = Math.ceil(Math.random()*4);
        setTimeout(function(){
            if(randomNum==1){
            playSound("btn green");
            animation("btn green");
            }
            else if (randomNum==2){
                playSound("btn red");
                animation("btn red");
            }
            else if (randomNum==3){
                playSound("btn yellow");
                animation("btn yellow");
            }
            else{
                playSound("btn blue");
                animation("btn blue");
            }
        },i*600);
        pattern.push(randomNum);
    }

    setTimeout(function(){$(".btn").css("pointer-events","auto");},n*600);
    return pattern;
}


// STARTS GAME
function startGame(level){
    gamePattern = generatePattern(level);
    userIndex  = 0;
    $("h1").text("Level "+level);
}

// HANDLE CLICK EVENT
function catchClick(event){
    let classes = event.currentTarget.className;
    let colors = classesToColor(classes);
    if(colors=="green") return 1;
    if(colors=="red") return 2;
    if(colors=="yellow") return 3;
    if(colors=="blue") return 4; 
    return -1;

}



// START GAME WHILE DETECTING CLICK
$("body").on("keypress",function(event){
    if(allowKeyPress)
    startGame(1);
    allowKeyPress = false;
});


// ON CLICK CHECKS INPUT WITH REQUIRED AND DO ACCORDING TO IT
$(".btn").on("click",function(event){
    let userInput = catchClick(event);
    let colors = numToColor(userInput);
    if(userInput==gamePattern[userIndex]){
        animation(colors);
        playSound(colors);
        userIndex++;
        if(userIndex==gamePattern.length){
            userIndex = 0;
            setTimeout(function(){
                startGame(gamePattern.length+1);
            },1000);
        }
    }
    else{
        userIndex = 0;
        $("h1").text("GameOver");

        playSound("wrong");
        setTimeout(function(){
        $("h1").text("Press A key to restart");
            allowKeyPress = true;
            $(".btn").css("pointer-events","none");
        },1000);
    }
});
