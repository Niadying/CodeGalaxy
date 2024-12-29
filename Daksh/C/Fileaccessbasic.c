#include <stdio.h>

int main(){

    FILE *name;

    name = fopen("io.txt", "w"); // 'w' for write(erase previous work) & 'a' for add

    fputs("Hello, I'm Daiya :D\n", name);
    int age = 18;

    fprintf(name, "Age : %d\n", age);


    fclose(name);

    return 0;

}