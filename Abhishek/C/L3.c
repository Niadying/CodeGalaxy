#include<stdio.h>
void main()
{
    int alpha;
    printf("enter the number that you want to cobnvert into ascii code");
    scanf("%d",&alpha);
    printf("the  ASCII code for the haracter %d is %c",alpha, alpha);


// find the sum of digits of the number 
    int i,jolo,sum=0;

    printf("enter the 5 digit number of your choice");
    scanf("%d",&jolo);
    
    for (jolo=0,i<5,i++){
        sum=sum+jolo%10;
        jolo=jolo/10;
    }
    printf("sum of the digits of the number is %d",sum);
    getchar();
    

// reverse the number 
    int rev = 0, dig, num;
    printf("enter the number ");
    scanf("%d",&num); 

    while(num!=0){
        dig=num%10;
        rev=rev*10+dig;
        num=num/10;

    }
    printf("the number which has the digits reversed from the number entered byy you is %d", rev);

    //find the percentage of literacy
    
    double boy, girl ,bigB, bigG , popu;
    

    bigB= (52/100)*(65/100)*popu;
    bigG= (48/100)*(13/100)*popu;
}