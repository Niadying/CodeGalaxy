#include <stdio.h>
#include <string.h>

typedef struct {
    char name[50];
    char id[12];
    int age;
    int grades[5];
}Student;


int main(){

    Student Daiya;

    strcpy(Daiya.name, "Daksh");
    strcpy(Daiya.id, "128612861286");
    Daiya.age = 18;


    printf("Name: %s\n", Daiya.name);

    return 0;

}