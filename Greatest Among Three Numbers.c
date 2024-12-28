#include <stdio.h>  // Standard input-output header for printf and scanf

int main() {
    int a, b, c;  // Variables to store the three numbers

    // Ask the user to input three numbers
    printf("Enter Three Numbers: ");  
    scanf("%d %d %d", &a, &b, &c);  // Read the input values

    // Check if 'a' is the largest number
    if (a > b && a > c) {
        printf("A is greatest");  // If 'a' is the largest, print it
    } 
    // Otherwise, check if 'b' is the largest
    else if (b > c) {  
        printf("B is greatest");  // If 'b' is the largest, print it
    } 
    // If neither 'a' nor 'b' is the largest, 'c' must be the largest
    else {  
        printf("C is greatest");  // Print that 'C' is the greatest
    }

    return 0;  // End the program successfully
}
