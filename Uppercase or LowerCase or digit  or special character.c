#include <stdio.h>  // Include standard input/output library

int main() {
    char ch;  // Variable to store the input character

    // Prompt the user to enter a character
    printf("Enter a character: ");
    scanf("%c", &ch);  // Read the input character

    // Check if the character is an uppercase letter
    if (ch >= 'A' && ch <= 'Z') {
        printf("Upper Case");  // Print "Upper Case" if true
    }
    // Check if the character is a lowercase letter
    else if (ch >= 'a' && ch <= 'z') {
        printf("Lower Case");  // Print "Lower Case" if true
    }
    // Check if the character is a digit
    else if (ch >= '0' && ch <= '9') {
        printf("Digit");  // Print "Digit" if true
    }
    // If none of the above, it's a special character
    else {
        printf("Special character");  // Print "Special character"
    }

    return 0;  // End the program
}
