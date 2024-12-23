#include <stdio.h>

int main(){

    int mats[] = {23, 45, 32, 44, 56};

    int total = 0;

    for (int i = 0; i < 5; i++)

        total = total + mats[i];

    int average = total / 5;

    printf("average: %d\n", average);

    return 0;

}