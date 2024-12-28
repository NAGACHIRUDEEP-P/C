#include <stdio.h>  // Include standard input/output library

int main() {
    int age;  // Variable to store the age

    // Prompt the user to enter their age
    printf("Enter Age: ");
    scanf("%d", &age);  // Read the age input

    // Check if the age is 18 or older
    if (age >= 18) {
        printf("Eligible for Vote");  // Print message if eligible to vote
    } else {
        printf("Not Eligible For Vote");  // Print message if not eligible to vote
    }

    return 0;  // End the program
}
