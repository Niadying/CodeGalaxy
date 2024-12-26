#include <stdio.h>
#include <string.h>

int main(){

    char name[] = "Daksh Kumar Bamniya";

    int Name_Length = strlen(name);

    printf("%s\n", name);

    for(int i = 0; i <= Name_Length; i++){
        if (name[i] != ' '){
        printf("The Individual(%d) letters are: '%c'\n", i, name[i]); 
        }
    }

    return 0;
}