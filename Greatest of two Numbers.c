#include <stdio.h>  // Include standard input/output library

int main() {
    int a, b;  // Variables to store the two numbers

    // Prompt the user to enter two numbers
    printf("Enter Two number: ");
    scanf("%d %d", &a, &b);  // Read the two numbers

    // Check if 'a' is greater than 'b'
    if (a > b) {
        printf("A is Greatest");  // Print "A is Greatest" if true
    } else {
        printf("B is Greatest");  // Print "B is Greatest" if false
    }

    return 0;  // End the program
}
