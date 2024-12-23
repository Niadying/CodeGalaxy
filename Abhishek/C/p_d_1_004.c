#include<stdio.h>

int main()
{
    int a, b, choice;
    
    printf("enter the number\n");
    scanf("%d",&choice);
    
    for(a=choice;a>0;a--)
    {
        for(b=1;b<=a;b++)
        {
            printf("%d",b);
        
        }
        printf("\n");
    }
}