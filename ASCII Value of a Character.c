#include <stdio.h>

int main() 
{  
    char c;  // Character input
    printf("Enter a character: ");  // Prompt
    scanf("%c", &c);  // Read input
    printf("ASCII value of %c = %d", c, c);  // Output ASCII value
    return 0;  // End program
}
