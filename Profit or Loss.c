#include <stdio.h>

int main()
{
    float cp, sp; // Cost price and selling price
    printf("Enter cost price: ");
    scanf("%f", &cp); // Input cost price
    printf("Enter selling price: ");
    scanf("%f", &sp); // Input selling price

    if(sp > cp)
        printf("Profit = %.2f", sp - cp); // Print profit
    else if(cp > sp)
        printf("Loss = %.2f", cp - sp); // Print loss
    else
        printf("No Profit No Loss."); // No profit/loss

    return 0; // Program ends
}
