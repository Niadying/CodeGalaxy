#include<stdio.h>

int main() {
    int larger, num1, num2;

    printf("enter the numbers you want to be compared\n");
    scanf("%d,%d", &num1,&num2);

    if (num1>num2){
        printf("The number %d is greater than the number %d.\n", num1,num2);
    }
    else if (num2>num1){
        printf("The number %d is greater than the number %d.\n", num2,num1);
    }    
    else{
        printf("both the numbers are numerically equal\n");
    
    }
    
   // to find the nature of a number

    int number;
    char the_case;

    printf("enter the number\n");
    scanf("%d",&number);

    printf("enter a to find if the number if the number is even or odd\n else enter b to find if its psitive or negative \n");
    scanf("%c",&the_case);
    
    switch (the_case)
    {
    case 'a':
        if (number>0){
            printf("the number is positive\n");
        }

        else if (number<0){
            printf("the number is negative\n");
        }

        else{
            printf("the number is nither positive nor negative hence it is zero");

        }
    case 'b':
        float temporary;
        temporary = number%2;

        if(temporary=0){
            printf("the number is even");
        }

        else{
            printf("the number is odd");
        }
    default:
        printf("thank you");
        
    
    // voting
    
    int age ;

    if (age>=18){
        printf("you are eligible to vote");
    }

    else {
        printf("you are not eligible to vote");
    }


    // x and y
    
    int x,y;
    
    printf("enter the numbers x and y\n");
    scanf("%d,%d",&x,&y);
    
    if(x<y){
        
        int temp2;
        
        temp2=x*y;
        printf("the product of x and y is %d",temp2);
    }
    else{
        
        float temp3;
        
        temp3 = x%y ;
        printf("the remainder when x is divide by y is %d",temp3);
    }
    
    
    //to find the greatest between 3 numbers
    
    int stone1,stone2,stone3;
    
    if (stone1>stone2){
        if(stone1>stone3){
            prinf("the first number is the greatest of all 3\n");
        }
        else {
            printf("the third number is the greatest of all 3\n");
        
        }
    }
    else {
        if(stone2>stone3){
        printf("the second number is the greatest");
        }
        else{
            printf("the third number is the greatest");
        }
    }
    
    
    //
    
    
    
    }
}