#include <stdio.h>

int main() {
    int n;

    // Input the integer n
    printf("Enter an integer: ");
    scanf("%d", &n);

    // Print the first three powers of n (n^1, n^2, n^3)
    printf("The first three powers of %d are:\n", n);
    printf("%d^1 = %d\n", n, n);          // n^1
    printf("%d^2 = %d\n", n, n * n);      // n^2
    printf("%d^3 = %d\n", n, n * n * n);  // n^3

    return 0;
}
