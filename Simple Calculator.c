#include <stdio.h>

int main()
{
    int a, b;  // Declare two integer variables for the numbers
    char ch;   // Declare a character variable for the operator

    // Ask the user to enter an operator (+, -, *, /)
    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &ch);  // Read the operator input

    // Ask the user to enter two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);  // Read two integers into a and b

    // Use a switch statement to handle different operations
    switch(ch)
    {
        case '+':
            // If the operator is '+', perform addition
            printf("Addition of %d and %d = %d\n", a, b, a + b);
            break;

        case '-':
            // If the operator is '-', perform subtraction
            printf("Subtraction of %d and %d = %d\n", a, b, a - b);
            break;

        case '*':
            // If the operator is '*', perform multiplication
            printf("Multiplication of %d and %d = %d\n", a, b, a * b);
            break;

        case '/':
            // If the operator is '/', perform division
            // Check if the divisor (b) is zero
            if(b != 0)  // Division by zero check
            {
                // Perform division if b is not zero
                printf("Division of %d and %d = %d\n", a, b, a / b);
            }
            else
            {
                // Display an error message if division by zero is attempted
                printf("Error: Division by zero is not allowed.\n");
            }
            break;

        default:
            // This handles any invalid operator input
            printf("Invalid operator.\n");
            break;
    }

    return 0;
}
