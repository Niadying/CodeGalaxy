// ADDING CSS CLASS TO H1

$("h1").addClass("big-title");

// GETTING VALUE OF CSS COLOR PROPERTY

// console.log($("h1").css("color"));

//CHANGING CSS

// $("h1").css("color","white");

// CHANGING TEXT
$("h1").text("Kya haal chaal hai");

// CHANGING HTML
$("button").html("<em>Mujhe mat chuo</em>");
$("a").html("<em>Open Meee</em>")

// ADDING EVENT LISTNER

// click
$("button").click(function(e){
    $("h1").css("color","blueviolet");
    $("h1").removeClass("big-title");
    // if(e.currentTarget.className == "request haeeli"){
    //     alert("Shi ja rhe ho guru");
    // }
    console.log(e.currentTarget.className);

});

// keypress
var temp = "";
$("body").keypress(function(event){
     $("h1").text(temp+event.key);
     temp = $("h1").text();
});


// on general

$("h1").on("mouseover", function(){
    $("h1").text("You have arrived on h1");
});


// ADDING HTML ELEMENTS

$("h1").before("<button>New Btn </button>");
$("h1").after("<button>New Btn </button>");
$("h1").prepend("<button>New Btn </button>");
$("h1").append("<button>New Btn </button>");

// REMOVING ELEMENTS

// $("button").remove();