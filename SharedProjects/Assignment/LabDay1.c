#include <stdio.h>
#include <conio.h>

int main (){

    //A program to print your name,scholar and branch

    printf("My name is Daksh Kumar Bamniya\n");
    printf("My Scholar number is 24U020035\n");
    printf("I'm in CSE section A\n");

    //A program to declare and initialize variables

    int a;
    a = 69;
    int b;
    b = 420;

    int x = a * b;

    printf("%d", x);
    printf("\n");

    //User input

    //Area of Circle
    float pi;
    pi = 3.14;
    int radius;

    printf("What is the radius?");
    scanf("%d", &radius);

    float area = (float) (pi * radius * radius);

    printf("%f", area);
    printf("\n");

    //Area & Perimeter of rectangle

    int length;
    int breadth;

    printf("What is the length?");
    scanf("%d", &length);

    printf("What is the breadth?");
    scanf("%d", &breadth);

    float sumlb = (float) (length + breadth);
    float perimeter = (float) (sumlb * 2);
    float arearec = (float) (length * breadth);

    printf("%f", perimeter);
    printf("\n");

    printf("%f", arearec);
    printf("\n");

    //money conversion

    printf("How much money do you have in $Dollar?");
    int money;

    scanf("%d", money);
    
    int value;
    value = 84;

    int inr = (money * value);

    printf("Your money in INR is %d\n", inr);

    printf("Thank you");

    return 0;

}
