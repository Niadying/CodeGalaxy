#include <stdio.h>
#include <stdbool.h>

int main(){

    FILE *Quit;

    Quit = fopen("Quit.txt", "w");

    int input = 0;
    while (true){
        printf("Enter # (-12 quits): ");
        scanf("%d", &input);

        if (input == -12) break;
        else fprintf(Quit, "%d\n", input);
    }

    fclose(Quit);

    return 0;

}