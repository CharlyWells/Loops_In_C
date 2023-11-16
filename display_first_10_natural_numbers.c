#include <stdio.h>

/**
 *description: a program in C to display the first 10 natural numbers
 *written by: Charlotte Wellington
 *return 0
 */
int main()
{
   int number = 1;
   while(number < 10)
   {
     number++;
     printf("%d", number);
   }

   return 0;
}
