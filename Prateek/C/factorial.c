#include<stdio.h>
int main(){

int P,T;
float R;

printf("Enter P,R,T : ");

scanf ( "%d","%f","%d" ,&P,&R,&T );

// printf("%d", a);

// if (a>=100){

//     printf ("You are a topper");
// }

// else if (a>=60){

//     printf("I st division");
//  }
 
//  else if (a>=50){

//     printf("II nd division");
// }

// else if (a>=40){

//     printf("III rd division");
// }
// else {
//     printf ( "You failed the test.");
// }

// int i = a>10 ? 200:100;s

// printf ("%d",i);
// a>60 ? printf("Ist division") : a>50 ? printf("IInd division") : a > 40 ? printf("IIIrd division") : printf  ("Fail");


// program to find SI using for loop 3 times in a single code

for (int i = 1; i<=3; i++){

float a = (P*R*T)/100;
    printf("%f",a);
}




}