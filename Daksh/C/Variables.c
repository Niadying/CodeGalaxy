#include <stdio.h>

int main(){

    // Unsigned makes Positive Only
    //short or long control amount of bits

    int basic = 12;


    float decimalbutlessprecise = 3.14568239457486;
    double decimalbutmoreprecise = 3.14568239457486;


    char d = 'Y'; //Encoded Charcters these are actually a number

    char c = 112;


    printf("Int: %d\n", basic);
    printf("Float: %f\n", decimalbutlessprecise);
    printf("Double: %f\n", decimalbutmoreprecise);
    printf("Char: %c\n", d);
    printf("Char: %c\n", c);


    return 0;

}