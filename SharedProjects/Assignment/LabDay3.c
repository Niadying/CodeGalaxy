#include <stdio.h>

int main(){

    //To convert digits to ASCII

    int input;

    printf("Enter a digit to convert it into ASCII: ");
    scanf("%d", &input);

    printf("ASCII value of %d is %c\n", input, input);

    
    //Sum of 5 digits in a single number

    int num, sum;
    printf("Enter a 5-digit number: ");
    scanf("%d", &num);

    sum = (num / 10000) + ((num % 10000) / 1000) + ((num % 1000) / 100) + ((num % 100) / 10) + (num % 10);
    printf("Sum of the digits is: %d\n", sum);


    //reverse a 5 digit number

    int reverse = 0, digit;
    printf("Enter a 5-digit number: ");
    scanf("%d", &num);

    while(num!=0){
        digit = num % 10;
        reverse = reverse * 10 + digit;
        num = num / 10;
    }

    printf("Reversed number is: %d\n", reverse);


    //Literacy finder

    double man, woman, iliterate_men, iliterate_women, Total_population = 80000;
    
    iliterate_men = Total_population*(52/100)*(65/100);
    iliterate_women = Total_population*(48/100)*(13/100);

    






}