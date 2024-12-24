#include<stdio.h>  // For printf and scanf functions
int main() 
{
    char fname[20], mname[20], lname[20]; // Arrays to store first, middle, and last names
    printf("Enter name (First, Middle, Last): "); // Prompt user for full name
    scanf("%s %s %s", fname, mname, lname); // Read first, middle, and last names
    printf("Abbreviated name: "); // Output label
    printf("%c. %c. %s\n", fname[0], mname[0], lname); // Print initials and last name
}
