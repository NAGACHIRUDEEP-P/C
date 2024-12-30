#include <stdio.h>
int main() 
{
    int num, count = 0; // Input number and digit count
    printf("Enter an integer: "); // Prompt for input
    scanf("%d", &num); // Read input

    if (num == 0) {
        count = 1; // Special case: single digit for 0
    } else {
        while (num != 0) {
            num /= 10; // Remove the last digit
            count++;   // Increment digit count
        }
    }

    printf("Number of digits: %d\n", count); // Output result
    return 0;
}
