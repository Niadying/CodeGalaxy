#include <stdio.h>

int main(){

    //! %[flags] [width] [.precision]specifier

    /*
    
    Some special Charcters
    \n for new line
    \t for Tab like space
    \" for double qoute DUH
    \ not use it alone
    \\ for "\" DUH

    use %lf for more than 1 decimal point
    
    */

    printf("Chotu can't use New Tab\n");

    char str[] = "Mammi is annoying!\n";
    printf("%s", str);

    printf("|||%-3d|||\n", 9);
    printf("|||%8.4f|||\n", 3.457465736487);


    return 0;

}