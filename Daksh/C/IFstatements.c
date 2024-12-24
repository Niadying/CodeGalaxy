#include <stdio.h>

int main(){

    int age;

    printf("Input your age: ");
    scanf("%d", &age);

    if (age < 18) printf("You cannot enter!\n");
    else if (age >= 18) printf("Welcome to the Bar\n");
    else printf("INVAILD INPUT\n");

    printf("Thanks!\n");

    return 0;

}