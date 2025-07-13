import fs from "fs";
import qr from "qr-image";


function generateQR(){
    var qr_svg = qr.image("https://www.amazon.com");
    qr_svg.pipe(fs.createWriteStream('qr-img.png'));

}

generateQR();
