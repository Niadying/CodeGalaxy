#include <stdio.h>
#include <string.h>

int main() {
    char word[100]; // Array to hold the word inputted by the user
    int length, i;

    // Asking the user to input a word
    printf("Enter a word: ");
    scanf("%s", word);

    // Calculating the length of the word
    length = strlen(word);

    // Printing the word in reverse
    printf("Reversed word: ");
    for (i = length - 1; i >= 0; i--) {
        printf("%c", word[i]);
    }

    printf("\n"); // Newline for better formatting
    return 0;
}
