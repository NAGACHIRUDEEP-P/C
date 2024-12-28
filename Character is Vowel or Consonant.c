#include <stdio.h>  // Include standard input/output library

int main() {
    char ch;  // Variable to store the input character

    // Prompt user for a character input
    printf("Enter a character: ");
    scanf("%c", &ch);  // Read the character input

    // Check if the character is a vowel (both lowercase and uppercase)
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || 
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        printf("Vowel");  // Print "Vowel" if the condition is true
    } else {
        printf("Consonant");  // Otherwise, print "Consonant"
    }

    return 0;  // End the program
}
