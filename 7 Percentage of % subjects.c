#include <stdio.h>

int main() {
    float m1, m2, m3, m4, m5, total, percentage;  // Declare variables for marks, total, and percentage

    // Input marks for 5 subjects
    printf("Enter 5 subjects marks: ");
    scanf("%f %f %f %f %f", &m1, &m2, &m3, &m4, &m5);

    // Calculate total marks
    total = m1 + m2 + m3 + m4 + m5;

    // Calculate percentage
    percentage = (total / 500) * 100;  // Assuming each subject is out of 100

    // Output the percentage
    printf("Percentage of 5 subjects = %.2f%%", percentage);

    return 0;
}
