#include <stdio.h>

int main(){

    int a = 5;
    int b = 2;

    double c = (double) a / b;

    printf("Answer of %d / %d = %d\n", a, b, a / b);
    printf("Answer of %d / %d = %f\n", a, b, c);

    return 0;

}