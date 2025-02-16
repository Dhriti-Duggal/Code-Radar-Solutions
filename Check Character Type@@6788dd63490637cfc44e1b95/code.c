#include <stdio.h>

int main() {
    char ch;
    scanf("%c", &ch);

    // Check if the character is a digit
    if (ch >= '0' && ch <= '9') {
        printf("Digit");
    }
    // Check if the character is an alphabet
    else if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
        // Check if it's a vowel
        if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' ||
            ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            printf("Vowel");
        }
        else {
            printf("Consonant");
        }
    }
    // If not a digit or an alphabet, it's a special character
    else {
        printf("Special Character");
    }

    return 0;
}
