#include <stdio.h>
int main()
{
    int a[2][3], i, j, b[2][3], c[2][3];

    // Input elements into the first 2x3 matrix
    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]); // Read element
        }
    }

    // Input elements into the second 2x3 matrix
    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 3; j++)
        {
            scanf("%d", &b[i][j]); // Read element
        }
    }

    // Add corresponding elements of both matrices and print the result
    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 3; j++)
        {
            c[i][j] = a[i][j] + b[i][j]; // Compute element sum
            printf("%d ", c[i][j]); // Print summed element
        }
        printf("\n"); // New line after each row
    }

    return 0;
}
