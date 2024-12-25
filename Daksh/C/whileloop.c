#include <stdio.h>

int main(){

    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num > 0)
    {
        printf("This is just spamming!");
        printf(" x %d\n", num);
        num--;
    }

    printf("It's OVER!!\n");

    return 0;

}