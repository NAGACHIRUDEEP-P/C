#include<stdio.h>

int main()
{
    int num, count = 0, q;

    // Prompt the user to enter a number
    printf("Enter a number: ");
    scanf("%d", &num);

    q = num;

    // Count the number of digits in the number
    while (q != 0)
    {
        q = q / 10;
        count++;
    }

    int cnt = count, rem, mul = 1, res = 0;
    q = num;

    // Calculate the sum of each digit raised to the power of 'count'
    while (q != 0)
    {
        rem = q % 10; // Get the last digit

        // Compute power of the digit (rem^cnt)
        while (cnt != 0)
        {
            mul *= rem;
            cnt--;
        }

        res += mul;   // Add the result to the sum
        cnt = count;  // Reset the power counter
        q = q / 10;   // Remove the last digit
        mul = 1;      // Reset multiplier
    }

    // Check if the number is an Armstrong number
    if (res == num)
        printf("%d Is an Armstrong Number", num);
    else
        printf("%d Is Not an Armstrong Number", num);

    return 0;
}
