const fs = require("fs");

// CREATING A NEW FILE
// fs.writeFile("msg.txt","I love you Amishaa...", function(err){
//     if(err) throw err;
//     console.log("File has been saved succesfully!!");
// });


// RENAMING THE FILE

// fs.rename("hello.txt","message.txt",(err,data)=>{
//     if(err)console.log("You have got an errorrr!!!");
//     else 
//     console.log(data);
// })

// READING THE DATA OF THE FILE

// fs.readFile("message.txt","utf-8",(err,data)=>{
//     if(err)console.log("You got an error!!!");
//     else {
//         console.log("Reading the data of message : ");
//         console.log(data);
//     }
// });

// // OVERWRITING DATA OF THE EXISTING FILE

// fs.writeFile("msg.txt","Hey Amishaa, can we talk like we used to do...",(err)=>{
//     if(err)throw err;
//     console.log("File is overwritten");
// })

// // ADDING DATA NEXT TO THE FILE

// fs.appendFile("msg.txt","Hey I want to confess that can you love me like I do..",(err)=>{
//     if(err)throw err;
//     console.log("File is updated...");
// })

// READING THE DATA and UPDATING IT 

fs.readFile("msg.txt","utf-8",(err,data)=>{
    if(err)console.log("You got an error!!!");
    const updatedData = data.replace("like","I like you a lot and I wish we were togetherssss...");
    fs.writeFile("msg.txt",updatedData,(err)=>{
        if(err)throw err;
        console.log(data);
    })
});


