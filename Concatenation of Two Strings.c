//With Using strcat();

#include<stdio.h>
#include<string.h>

int main()
{
    char s1[30] = "Chirudeep"; // Initialize first string with enough space
    char s2[] = "Naga";        // Initialize second string

    strcat(s1, s2);            // Concatenate s2 to the end of s1

    printf("%s", s1);          // Print the resulting string
    return 0;
}


//Without Using strcat();
#include<stdio.h>
#include<string.h>

int main()
{
    int l1, l2;               // Variables to store the lengths of s1 and s2
    char s1[30] = "Chirudeep"; // Initialize first string with enough space
    char s2[] = "Naga";        // Initialize second string

    l1 = strlen(s1);           // Calculate length of s1
    l2 = strlen(s2);           // Calculate length of s2

    // Append s2 to s1 manually
    for (int i = 0; i <= l2; i++) {
        s1[l1 + i] = s2[i];    // Copy each character, including null terminator
    }

    printf("%s", s1);          // Print the concatenated string
    return 0;
}




//Without Using strcat(); and strlen();
#include<stdio.h>

int main()
{
    char s1[30] = "Chirudeep"; // Initialize first string with enough space
    char s2[] = "Naga";        // Initialize second string
    int l1 = 0, l2 = 0;        // Variables to store lengths of s1 and s2

    // Calculate the length of s1 manually
    while (s1[l1] != '\0') {
        l1++;
    }

    // Calculate the length of s2 manually
    while (s2[l2] != '\0') {
        l2++;
    }

    // Append s2 to s1 manually
    for (int i = 0; i <= l2; i++) {
        s1[l1 + i] = s2[i]; // Copy each character, including null terminator
    }

    printf("%s", s1); // Print the concatenated string
    return 0;
}
