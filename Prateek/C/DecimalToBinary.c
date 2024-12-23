#include<stdio.h>
int main(){

    int a;
    printf("Enter the number : ");
    scanf ("%d",&a);
    int m = 0;


    for (int i = 1; a!=0; i*10){

        int k = a%2;

        m = m + k*i;

        a = a/2;
        

    }
printf("%d", m);


    return 0 ;
}