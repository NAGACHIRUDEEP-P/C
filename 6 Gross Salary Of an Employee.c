//1: Calculate Gross Salary Using Basic Salary, Dearness Allowance (DA), and House Rent (HR)
//This program calculates the Gross Salary by adding the Basic Salary, Dearness Allowance (DA) (5% of Basic Salary), and House Rent (HR) (10% of Basic Salary).

#include<stdio.h>  // Include standard input/output functions
void main() 
{
    long int gs,bs,da,hr;  // Declare variables for Gross Salary, Basic Salary, DA, and HR

    // Prompt the user to enter their Basic Salary
    printf("Enter your Basic Salary \n");
    
    // Read the Basic Salary from the user
    scanf("%ld",&bs);
    
    // Calculate Dearness Allowance (DA) as 5% of Basic Salary
    da=(bs*5)/100;
    
    // Calculate House Rent (HR) as 10% of Basic Salary
    hr=(bs*10)/100;
    
    // Calculate Gross Salary by adding Basic Salary, DA, and HR
    gs=bs+da+hr;
    
    // Output the Gross Salary
    printf("\nGross Salary is %ld",gs);
}


//2: Calculate Gross Salary by Adding Basic Salary, HRA, and Other Allowances

#include<stdio.h>  // Include standard input/output functions
int main() 
{
    float Gross, Basic, HRA, Other;  // Declare variables for Basic Salary, HRA, Other Allowances, and Gross Salary
    
    // Ask the user to input Basic Salary, HRA, and Other allowances
    printf("Enter Basic Salary, HRA, Other Allowances: ");
    
    // Read the values from the user
    scanf("%f %f %f", &Basic, &HRA, &Other);
    
    // Calculate Gross Salary by adding the components
    Gross = Basic + HRA + Other;
    
    // Output the Gross Salary with 2 decimal places
    printf("Gross Salary = %.2f\n", Gross);
    return 0;  // Program completed successfully
}
