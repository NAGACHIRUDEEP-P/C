#include<stdio.h>
void main()
{
   int year;  // Variable to store the year
   printf("Enter The Year\n");
   scanf("%d", &year);  // Input the year from the user

   // Check if the year is divisible by 100
   if (year % 100 == 0) 
   {   
       // If divisible by 100, check if it is divisible by 400
       if (year % 400 == 0)
           printf("Leap year");  // Divisible by 400, it's a leap year
       else
           printf("Not a Leap year");  // Not divisible by 400, not a leap year
   }
   else
   { 
       // If not divisible by 100, check if it's divisible by 4
       if (year % 4 == 0)
           printf("Leap year");  // Divisible by 4, it's a leap year
       else
           printf("Not a Leap year");  // Not divisible by 4, not a leap year
   }
}
