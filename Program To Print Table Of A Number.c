#include <stdio.h>

void main()
{
    int num;
    
    // Prompt user to enter a number
    printf("Enter a number: ");
    scanf("%d", &num);  // Read the user input
    
    // Loop through numbers 1 to 10 to print the multiplication table
    for (int i = 1; i <= 10; i++)
    {
        // Print the multiplication result for the current number
        printf("%d * %d = %d\n", num, i, num * i);
    }
}
