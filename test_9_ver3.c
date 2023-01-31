#include <stdio.h>

void main()
{
     float num1,num2,num3,num4, num5; // Declaring the five variables
     float sum = 0.0; //Define variable sum and initialize with 0 value
     
     printf("Give me the first number:\n"); /* prompt asking for the first number */
     scanf("%f", &num1);  // the program reads the given value
     printf("Give me the second number:\n"); /* prompt asking for the second number */
     scanf("%f",&num2); // the program reads the given value
     printf("Give me the third number:\n"); /* prompt asking for the third number */
     scanf("%f",&num3);  // the program reads the given value
     printf("Give me the fourth number:\n"); /* prompt asking for the fourth number */
     scanf("%f",&num4); // the program reads the given value
     printf("Give me the fifth number:\n"); /* prompt asking for the fifth number */
     scanf("%f",&num5); // the program reads the given value



     av = (num1+num2+num3+num4)/4; /*The average number av of four numbers above*/ 
     sum = num1+num2+num3+num4; // The sum of the given numbers
     printf("The sum of the given four numbers is: %f\n", sum); //Prompting the result
     printf("The average of the given four numbers is: %f\n", av);
