#include <stdio.h>  // Include the standard input/output library

int main() {
    int a;  // Declare an integer variable to hold the input number

    // Prompt the user to enter a number
    printf("Enter a number: ");
    scanf("%d", &a);  // Read the input and store it in variable 'a'

    // Check if the number is positive or non-negative
    if (a >= 0) {
        printf("Positive Number");  // Print "Positive Number" if 'a' is 0 or greater
    } 
    else {
        printf("Negative Number");  // Print "Negative Number" if 'a' is less than 0
    }

    return 0;  // End the program
}
