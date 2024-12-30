#include <stdio.h>
int main() 
{
    int num, sum = 0; // Input number and sum
    printf("Enter a number (Positive): "); // Prompt for input
    scanf("%d", &num); // Read input
    int i = 0; // Initialize counter

    while (i <= num) 
    {
        sum += i; // Add i to sum
        i++; // Increment i
    }

    printf("Sum of first %d natural numbers is: %d", num, sum); // Output result
    return 0;
}
