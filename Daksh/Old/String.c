#include <stdio.h>
#include <string.h>

int main(){
    
    /*char name[] = "Daksh";

    printf("%s\n", name);

    for (int i = 0; i < 5; i++)
    printf("Name[%d] = '%c'\n", i, name[i]);
    */

    char fullname[] = "Daksh Kumar Bamniya";
    int length = strlen(fullname);
    printf("length = %d\n", length);


    int count_A = 0;

    for (int i = 0; i < length; i++)
        if (fullname[i] == 'a' ||
            fullname[i] == 'A')
        count_A++;

    printf("A Count: %d\n", count_A);


    return 0;


}