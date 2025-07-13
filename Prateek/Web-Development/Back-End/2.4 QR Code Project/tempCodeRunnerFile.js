import qr from "qr-image";
import inquirer from "inquirer";
import fs from "fs";

inquirer
  .prompt([
    {
        message: "Enter the URL",
        name: "URL",
    },
  ])
  .then((answers) => {

    const url = answers.URL;
    let name = url.slice(12,url.length-4);
    var qr_svg = qr.image(url);
    qr_svg.pipe(fs.createWriteStream(name+'.png'));
    
    fs.writeFile("Link.txt",url,(err)=>{
        if(err) console.log("There is an error!!");
        else console.log("QR is generated sucessfully...");
    });

  })
  .catch((error) => {
    if (error.isTtyError) {
      // Prompt couldn't be rendered in the current environment
    } else {
      // Something else went wrong
    }
  });

/* 
1. Use the inquirer npm package to get user input.
2. Use the qr-image npm package to turn the user entered URL into a QR code image.
3. Create a txt file to save the user input using the native fs node module.
*/
