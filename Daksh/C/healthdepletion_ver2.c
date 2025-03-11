#include <stdio.h>

int main() {
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

    // Set damage based on difficulty level
    switch (difficulty) {
        case 1: damage = 2; break;
        case 2: damage = 5; break;
        case 3: damage = 10; break;
        case 4: damage = health; break;
        default:
            printf("Invalid difficulty selected!\n");
            return 1;
    }
    
    // Single loop instead of repeated code
    while (health > 0) {
        printf("Your Current health is: %d\n", health);
        health -= damage;
        
        // Break early if health is depleted
        if (health <= 0) {
            break;
        }
    }
    
    printf("YOU ARE DEAD!\n");
    
    return 0;
}