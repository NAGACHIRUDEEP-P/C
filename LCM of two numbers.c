#include <stdio.h>

int main()
{
    int a, b;
    
    // Prompt the user to enter two numbers for LCM calculation
    printf("Enter two numbers to calculate LCM:\n");
    scanf("%d %d", &a, &b);
    
    // Displaying the entered numbers for reference
    printf("LCM of %d and %d is :\n", a, b);

    // Start from the larger of the two numbers and find the LCM
    for(int max = (a > b) ? a : b; ; max++)
    {
        // Check if 'max' is divisible by both numbers
        if(max % a == 0 && max % b == 0)
        {
            // If true, 'max' is the LCM, print and break the loop
            printf("%d", max);
            break;
        }
    }
    
    return 0;
}
