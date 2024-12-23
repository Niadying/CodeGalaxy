#include <stdio.h>

int main(){
    
    //! Greater Between

    //Getting the numbers

    int n1, n2, greater;

    printf("Input the values: ");
    scanf("%d %d", &n1, &n2);

    //Now using conditional operators

    greater = (n1 > n2) ? n1 : n2;
    
    //output

    printf("Between %d and %d = %d is greater\n", n1 ,n2 , greater);


    //! Positive or Negative

    if (n1 > 0){
        printf("%d is positive.\n", n1);
    } else if(n1 < 0){
        printf("%d is negative.\n", n1);
    } else {
        printf("This is Zero.\n");
    }


    //! Odd or Evem

    if (n2 % 2 == 0){
        printf("This is even.\n");
    }
    else {
        printf("This is odd.\n");
    }

    //! Voting Age Verifyer

    int age;

    printf("Whats ur age? ");
    scanf("%d", &age);

    if (age < 18){
        printf("Get TF Outta here!!\n");
    }
    else {
        printf("Welcome & Vote!\n");
    }

    //! X & Y falana

    int X, Y, falana;

    printf("Enter the digits ");
    scanf("%d %d", &X, &Y);

    falana = (X < Y) ? (X % Y) : (X * Y);

    printf("Heres the answer = %d\n", falana);

    //! Multi Condition

    int n3;

    printf("n3 please: ");
    scanf("%d", &n3);

    greater = (n1 > n2) ? ((n1 > n3) ? n1 : n3) : ((n2 > n3) ? n2 : n3);

    printf("#3 = %d\n", greater);

    //! Leap year calc

    int year;

    printf("Enter the year: ");
    scanf("%d", year);

    falana = (year % 4 == 0) ? printf("This year is a leap year\n") : printf("This year is a bad year\n");


//! LABDAY 4 DONE

    return 0;

}
