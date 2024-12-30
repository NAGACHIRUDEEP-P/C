#include<stdio.h>
void main()
{
    int angle1, angle2, angle3;  // Triangle angles
    printf("Enter the three angles of the triangle:\n");
    scanf("%d %d %d", &angle1, &angle2, &angle3);  // Input angles

    // Check if angles are positive and their sum is 180
    if (angle1 > 0 && angle2 > 0 && angle3 > 0 && (angle1 + angle2 + angle3 == 180)) 
        printf("The triangle is valid.\n");  // Valid triangle
    else
        printf("The triangle is not valid.\n");  // Invalid triangle
}
