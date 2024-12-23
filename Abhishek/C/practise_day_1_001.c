#include<stdio.h>

 int main()
{
    int a, i=1;

    printf("enter any number of your choice\n");
    scanf("%d",&a);

    for(i=1;i<=a;i++){
        for(int j=1;j<=i;j++){
            printf("+");
        }
    printf("\n");
    }



}
