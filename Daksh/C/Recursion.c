#include <stdio.h>

int factorial(int n);

int main(){

    //! Not Recursion

    int n = 0;
    int fact = 1;

    printf("Enter A Number: ");
    scanf("%d", &n);

    /*

    while (n >= 1)
    {
        fact = n * fact;
        n--;
    }

    */

    //! In recursion

    fact = factorial(n);

    printf("Factorial : %d\n", fact);

    return 0;

}

int factorial(int n){

    if(n == 1) return 1;
    return n * factorial(n - 1);

}