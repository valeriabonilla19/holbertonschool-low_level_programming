#include <stdio.h>

/**
 * main - entry point
 * Description: Prints numbers from 1 to 100 with FizzBuzz
 * - For multiples of three print "Fizz"
 * - For multiples of five print "Buzz"
 * - For numbers which are both multiples of three and five print "FizzBuzz"
 * - Otherwise print the number.
 *
 * Return: 0 (success)
 */

int main(void)
{
  int i;
  for(i = 1; i <= 100; i++)
    {
    if(i % 3 == 0 && i % 5 == 0)
      printf ("FizzBuzz");
    else if(i % 3 == 0)
      printf("Fizz");
    else if(i % 5 == 0)
      printf("Buzz");
    else
      printf("%d", i);
  if(i != 100)
    printf(" ");
}
printf("\n");
return(0);
}
