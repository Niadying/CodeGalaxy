#include <stdio.h>

int main(){

    int i = 0;

    printf("Loop start\n");

    while (i < 10)
    {
        i++;
        if (i == 3) continue;
        printf("i: %d\n", i);
        if (i == 7) break;
    }

    printf("Loop done\n");

    return 0;

}