#include<stdio.h>

int main()
{
    int a, b, value;
    
    printf("enter the number of your choice\n");
    scanf("%d",&value);
    
    for(a=1;a<=value;a++)
    {
        for(b=1;b<=a;b++)
        {
            printf("%d",b);
            
        }
        printf("\n");
    }
    
}