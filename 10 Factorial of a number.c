#include <stdio.h>

int main() {
    int num, factorial = 1;

    // Prompt user for input
    printf("Enter a number: ");
    scanf("%d", &num);

    // Calculate factorial using a loop
    for (int i = 1; i <= num; i++) {
        factorial *= i;  // Multiply current value of factorial by i
    }

    // Display the calculated factorial
    printf("Factorial of %d = %d\n", num, factorial);

    return 0;
}
