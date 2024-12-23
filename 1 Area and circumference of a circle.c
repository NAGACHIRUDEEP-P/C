#include<stdio.h> // For input/output functions
#define PI 3.14159 // Define PI constant

int main()
{
    float radius, area, circumference; // Variables for radius, area, and circumference

    printf("Enter the radius of the circle :"); // Prompt user for radius
    scanf("%f", &radius); // Read radius input

    area = PI * radius * radius; // Calculate area
    circumference = 2 * PI * radius; // Calculate circumference

    printf("Area of the circle = %.2f\n", area); // Print area
    printf("Circumference of a circle = %.2f\n", circumference); // Print circumference

    return 0; // End program
}
