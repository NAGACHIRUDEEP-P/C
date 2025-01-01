#include<stdio.h>
#include<string.h>

int main()
{
    int count = 0; // Variable to store the length of the string
    char name[30]; // Array to store the input string

    printf("Enter Name: ");
    gets(name); // Read the input string (unsafe, use fgets instead in real-world cases)

    count = strlen(name); // Calculate the length of the string

    printf("%d", count); // Print the length of the string
    return 0;
}

Using fgets

#include<stdio.h>
#include<string.h>

int main()
{
    int count = 0; // Variable to store the length of the string
    char name[30]; // Array to store the input string

    printf("Enter Name: ");
    fgets(name, sizeof(name), stdin); // Read the input string safely

    // Remove the newline character added by fgets, if present
    name[strcspn(name, "\n")] = '\0';

    count = strlen(name); // Calculate the length of the string

    printf("Length of the name: %d\n", count); // Print the length of the string
    return 0;
}
