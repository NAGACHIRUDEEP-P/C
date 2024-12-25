#include<stdio.h>
int main() {
    float p, r, t, Final;  // Declare variables for principal, rate of interest, time, and final amount
    // Prompt the user to input the principal, rate of interest, and time
    printf("Enter Principal, Rate of Interest, Time: ");
    // Read the values for principal, rate, and time
    scanf("%f %f %f", &p, &r, &t);
    // Calculate the simple interest using the formula: (p * r * t) / 100
    Final = (p * r * t) / 100;
    // Output the calculated final amount (interest)
    printf("Final Amount = %f", Final);
    return 0;  // End of program
}
