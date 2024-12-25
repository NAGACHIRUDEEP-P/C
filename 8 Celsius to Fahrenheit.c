#include <stdio.h>

int main() {
    float celcius, Fahrenheit;  // Declare variables for Celsius and Fahrenheit

    // Input temperature in Celsius
    printf("Enter the temperature in Celsius: ");
    scanf("%f", &celcius);

    // Convert Celsius to Fahrenheit
    Fahrenheit = (celcius * 9 / 5) + 32;

    // Output the Fahrenheit temperature
    printf("Fahrenheit temperature = %.2f", Fahrenheit);

    return 0;
}
