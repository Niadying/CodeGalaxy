#include <stdio.h>

int main(){

    //! Leap year with && or ||

    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)){
        printf("This is a leap year\n");
    } else {
        printf("this is not a leap year\n");
    }

    //! ASCII Values 
    // THIS DOES NOT WORK IN THE PRESENCE OF OTHER CODE, Make a separate file for it

    char ch;

    printf("Enter the character: ");
    scanf("%c", &ch);

    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')){
        if(ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' || 
            ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ){
                printf("%c is a vowel.\n", ch);
            } else{
                printf("%c is a consonant.\n", ch);
            }
    } else{
        printf("%c is not a character.\n", ch);
    }

    //! 
    
    return 0;

}