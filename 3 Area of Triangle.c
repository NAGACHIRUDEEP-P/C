#include<stdio.h>

int main()
{
    float B, H, Area;  // Variables for breadth, height, and area

    printf("Enter Breadth And Height:");  // Prompt for input
    scanf("%f %f", &B, &H);  // Read breadth and height

    Area = (B * H) / 2;  // Calculate area of the triangle
    printf("\nArea of the Triangle = %.2f", Area);  // Print the area

    return 0;  // End program
}
