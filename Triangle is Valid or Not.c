#include<stdio.h>
void main()
{
    int a, b, c;  // Variables to store the sides of the triangle
    printf("Enter the three sides of the triangle:\n");
    scanf("%d %d %d", &a, &b, &c);  // Input the three sides from the user

    // Check the triangle inequality conditions
    if ((a + b > c) && (a + c > b) && (b + c > a)) 
        printf("The triangle is valid.\n");  // Triangle is valid
    else
        printf("The triangle is not valid.\n");  // Triangle is not valid
}
