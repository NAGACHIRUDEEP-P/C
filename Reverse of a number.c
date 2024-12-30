#include<stdio.h>
int main()
{
    int n, rev = 0, rem;
    
    // Input the number
    printf("Enter a number: ");
    scanf("%d", &n);

    // Loop to reverse the number
    while (n != 0) {
        rem = n % 10;           // Get the last digit
        rev = rev * 10 + rem;   // Build the reversed number
        n /= 10;                // Remove the last digit from n
    }

    // Output the reversed number
    printf("%d", rev);

    return 0;
}
