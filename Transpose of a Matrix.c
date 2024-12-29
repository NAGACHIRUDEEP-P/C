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

    // Print the transpose of the matrix (3x2)
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 2; j++)
        {
            printf("%d\t", a[j][i]); // Print transposed element
        }
        printf("\n"); // New line after each row
    }
}
