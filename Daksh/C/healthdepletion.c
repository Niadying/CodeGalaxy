#include <stdio.h>

int main(){

    int health, damage, difficulty;

    printf("Input starting HEALTH: ");
    scanf("%d", &health);

    printf("Select difficulty\n");
    printf("1. Easy\n");
    printf("2. Medium\n");
    printf("3. Hard\n");
    printf("4. Impossible\n");

    printf("Enter: ");
    scanf("%d", &difficulty);

    switch (difficulty)
    {
    case 1 :
        damage = 2;
        while (health >= damage && health > 0){
            printf("Your Current health is: %d", health);
            printf("\n");
            health = health - damage;
        }
        printf("YOU ARE DEAD!\n");
        break;
    case 2:
        damage = 5;
        while (health >= damage && health > 0){
            printf("Your Current health is: %d", health);
            printf("\n");
            health = health - damage;
        }
        printf("YOU ARE DEAD!\n");
        break;
    case 3:
        damage = 10;
        while (health >= damage && health > 0){
            printf("Your Current health is: %d", health);
            printf("\n");
            health = health - damage;
        }
        printf("YOU ARE DEAD!\n");
        break;
    case 4:
        damage = health;
        while (health >= damage && health > 0){
            printf("Your Current health is: %d", health);
            printf("\n");
            health = health - damage;
        }
        printf("YOU ARE DEAD!\n");
        break;
    default:
        break;
    }

}