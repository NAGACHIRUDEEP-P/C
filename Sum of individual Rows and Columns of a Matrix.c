#include <stdio.h>
int main()
{
    int a[3][3], i, j, row, col;

    // Input elements into the 3x3 matrix
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]); // Read element
        }
    }

    // Calculate and print row and column sums
    for(i = 0; i < 3; i++)
    {
        row = 0; // Initialize row sum to 0
        col = 0; // Initialize column sum to 0
        for(j = 0; j < 3; j++)
        {
            row += a[i][j]; // Add elements of the row
            col += a[j][i]; // Add elements of the column
        }
        printf("row=%d, col=%d\n", row, col); // Print row and column sums
    }

    return 0;
}
