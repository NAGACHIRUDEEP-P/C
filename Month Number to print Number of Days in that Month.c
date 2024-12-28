#include<stdio.h>  // Include standard input/output library

int main() {
    int m;  // Variable to store the month number

    // Prompt the user to enter a month number (1-12)
    printf("Enter Month Number(1-12): ");
    scanf("%d", &m);  // Read the month number input

    // Check if the month has 31 days
    if(m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) {
        printf("31 Days");  // Print 31 days for these months
    }
    // Check if the month has 30 days
    else if(m == 4 || m == 6 || m == 9 || m == 11) {
        printf("30 Days");  // Print 30 days for these months
    }
    // February (month 2) has either 28 or 29 days
    else if(m == 2) {
        printf("28 or 29 Days");  // Print 28 or 29 days for February
    }
    // If month number is invalid (not between 1 and 12)
    else {
        printf("Invalid Month Number");  // Print error message
    }

    return 0;  // End the program
}
