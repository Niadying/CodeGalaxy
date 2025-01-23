#include <stdio.h>

int main(){

    int d;

    printf("Enter a number: ");
    scanf("%d", &d);
    
    do{
        printf("Khane me kya banare?\n");
        d++;
    } while (d < 12);


    return 0;

}