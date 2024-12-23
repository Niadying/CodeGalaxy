#include<stdio.h>

int main (){
    
    int a, b, rows, space;
    
    printf("enter the number of rows: ");
    scanf("%d",&rows);
    
    for(a=1;a<=rows;a++)
    {
        for(space=a;space<rows;space++)
        {
            printf(" ");
            
        }
        for(b=1;b<=(2*a-1);b++)
        {
            printf("*");
        }
        printf("\n");
    }
}