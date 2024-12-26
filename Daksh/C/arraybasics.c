#include <stdio.h>

int main(){

    int works[12];

    for(int i = 0; i < 12; i++){
        scanf("%d", works[i]);
    }

    for(int i = 0; i < 12; i++){
        printf("Value %d: %d\n", i+1, works[i]);
    }

    return 0;

}