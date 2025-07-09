// FIRST

let initial = $("h2").text();
// add
$(".inc").on("click",function(){
    $("h2").text(++initial);
});
// subtract
$(".dec").on("click",function(){
    $("h2").text(--initial);
});
// reset
$(".reset").on("click",function(){
    $("h2").text(0);
    initial = 0;
});


// SECOND

$(".upper-case").on("click",function(){
    let convertable = $(".convert").text();
    convertable = convertable.toUpperCase();
    $(".convert").text(convertable);
    console.log("Done");
});
$(".lower-case").on("click",function(){
    let convertable = $(".convert").text();
    convertable = convertable.toLowerCase();
    $(".convert").text(convertable);
    console.log("Done");
});
$(".captilize").on("click",function(){
    let convertable = $(".convert").text();
    convertable = convertable.capitalise();
    $(".convert").text(convertable);
    console.log("Done");
});

// THIRD
$(".input-box").on("input",function(){
    let txt = $(this).val();
    if(txt.length>100){
        $(this).val(txt.slice(0,100));
        $(".letter-cnt").text("You have crossed your limit...");
        return; 
    }
    $(".letter-cnt").text(txt.length);
});


// FOURTH
$(".prev").on("click",function(){
    let imgNumber = $("img").attr("src");
    imgNumber = imgNumber.slice(9,10);
    if(imgNumber=="1"){
        imgNumber = "9";
    }
    else imgNumber = imgNumber-"1";
    $("img").attr("src","./Images/"+imgNumber+".png");
});

$(".next").on("click",function(){
    let imgNumber = $("img").attr("src");
    imgNumber = imgNumber.slice(9,10);
    imgNumber = Number(imgNumber);
    if(imgNumber==9){
        imgNumber = 1;
    }
    else imgNumber = imgNumber+1;
    $("img").attr("src","./Images/"+imgNumber+".png");
});




