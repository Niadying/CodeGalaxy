#include <stdio.h>

int main(){

    int materials;
    int required_materials;

    required_materials = 148;

    printf("Enter the amount of Material you have : ");
    scanf("%d", &materials);


    if (materials >= required_materials){
        printf("Crafting Completed!\n");
    }
    else if (materials < required_materials && materials >= 0){
        printf("Gotta Keep Up the grind! %d more mats to go\n", required_materials - materials);
    }
    else if (materials < 0){
        printf("How do you even managed to do that??\n");
        printf("......So you're in my Debt now?\n");
    }
    else {
        printf("Stop testing my limits!\n");
    }

    return 0;

}