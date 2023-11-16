#include <stdio.h>

/**
 * description: a C program to compute the sum of the first 10 natural numbers.
 * written by: Charlotte Wellington
 * return: 0
 */
int main()
{
   int number2 = 1;
   int sum = 0;
   while(number2 <= 10)
   {
    number2++;
    sum = sum + number2;
    printf("%d",number2);
   }
   printf("The sum of the numbers is: %d",sum);
   return 0;
}
