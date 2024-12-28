#include <stdio.h>  // Include standard input/output library

int main() {
    int weekNumber;  // Variable to store the week number

    // Prompt user to enter a week number (1 to 7)
    printf("Enter week number (1-7): ");
    scanf("%d", &weekNumber);  // Read the week number input

    // Check which weekday corresponds to the entered week number
    if (weekNumber == 1) 
    {
        printf("Sunday");  // Print Sunday for week number 1
    } 
    else if (weekNumber == 2) 
    {
        printf("Monday");  // Print Monday for week number 2
    } 
    else if (weekNumber == 3) {
        printf("Tuesday");  // Print Tuesday for week number 3
    } 
    else if (weekNumber == 4) {
        printf("Wednesday");  // Print Wednesday for week number 4
    } 
    else if (weekNumber == 5) {
        printf("Thursday");  // Print Thursday for week number 5
    } 
    else if (weekNumber == 6) {
        printf("Friday");  // Print Friday for week number 6
    } 
    else if (weekNumber == 7) {
        printf("Saturday");  // Print Saturday for week number 7
    } 
    else {
        printf("Invalid week number!");  // Print an error message if input is not between 1 and 7
    }

    return 0;  // End the program
}
