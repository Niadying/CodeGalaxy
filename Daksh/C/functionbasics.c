#include <stdio.h>

int add(int x, int y);

int main(){

    int a, b;

    printf("Enter Two Numbers: ");
    scanf("%d", &a);
    scanf("%d", &b);

    int OUT = add(a, b);

    printf("Output: %d\n", OUT);

    return 0;

}

int add(int x, int y){

    int result = 0;

    result = x + y;
    return result;

}