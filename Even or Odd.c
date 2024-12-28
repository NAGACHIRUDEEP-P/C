#include <stdio.h>  // Include standard input/output library

int main() {
    int a;  // Variable to store the input number

    // Prompt the user to enter a number
    printf("Enter a number: ");
    scanf("%d", &a);  // Read the input number

    // Check if the number is even
    if (a % 2 == 0) {
        printf("Even Number");  // Print "Even Number" if the condition is true
    } else {
        printf("Odd Number");  // Print "Odd Number" if the condition is false
    }

    return 0;  // End the program
}
