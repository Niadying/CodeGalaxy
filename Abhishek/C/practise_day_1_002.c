#include<stdio.h>

int main()
{
    int a, j, user;
    
    printf("enter a number of your choice");
    scanf("%d",&user);

    for (a=user;a>1;a--)
    {
        for (j=1;j<a;j++)
        {
            printf("-");
        }
        printf("\n");
    }
    return 0;
}