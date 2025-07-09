let txt;
$(".input").on("input",function(){
    txt = $(".input").val();
});

$(".add").on("click",function(){
    if(txt!=undefined)
    addtask();
});

$("body").on("keypress",function(event){
    
    if(event.key==="Enter"&&txt!=undefined) addtask();
});

function addtask(){
    let listHtml = $(".list").html();
    listHtml += "<li> <input type= 'checkbox' class='done' > <span class='task' >" + txt+ "</span>  <button class='delete'>Delete</button> </li> <br>"
    $(".list").html(listHtml);
    $(".input").val("");
    txt=undefined;
}

$("body").on("click",".delete",function(){
    $(this).closest("li").remove();
});


$("body").on("click",".done",function(event){
    const taskText = $(this).siblings(".task");
    if($(this).is(":checked")){
        taskText.css("text-decoration","line-through");
        $(".done").css("background-color","green");
    }
    else{
        taskText.css("text-decoration","none");
        $(".done").css("background-color","none");
    }
});

$(".clear").on("click",function(){
    $(".done").closest("li").remove();
});