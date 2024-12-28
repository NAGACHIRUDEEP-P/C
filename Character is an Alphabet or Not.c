#include <stdio.h>  // Include standard input/output library

int main() {
    char ch;  // Variable to store the input character

    // Prompt the user for a character
    printf("Enter a character: ");
    scanf("%c", &ch);  // Read the character input

    // Check if the character is an alphabet (uppercase or lowercase)
    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
        printf("Alphabet");  // Print "Alphabet" if true
    } else {
        printf("Not an Alphabet");  // Print "Not an Alphabet" otherwise
    }

    return 0;  // End the program
}
