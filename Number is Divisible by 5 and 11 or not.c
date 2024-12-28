#include <stdio.h>  // Include standard input/output library

int main() {
    int a;  // Variable to store the input number

    // Prompt user to enter a number
    printf("Enter A Number: ");
    scanf("%d", &a);  // Read the number input

    // Check if the number is divisible by both 5 and 11
    if (a % 5 == 0 && a % 11 == 0) {
        printf("Number is divisible by 5 and 11");  // Print if divisible by both 5 and 11
    } else {
        printf("Number is not divisible by 5 and 11");  // Print if not divisible by both
    }

    return 0;  // End the program
}
