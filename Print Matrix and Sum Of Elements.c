#include <stdio.h>
int main()
{
    int a[2][3], i, j, sum = 0;

    // Input elements into the 2x3 matrix
    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]); // Read element
        }
    }

    // Print the 2x3 matrix and calculate the sum of its elements
    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("%d\t", a[i][j]); // Print element
            sum += a[i][j]; // Add element to sum
        }
        printf("\n"); // New line after each row
    }

    // Print the total sum of the matrix elements
    printf("Sum=%d", sum);

    return 0;
}
