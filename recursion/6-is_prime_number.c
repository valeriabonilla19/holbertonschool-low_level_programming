#include "main.h"

/**
* is_prime_number_helper - A helper function to
* recursively check if n is prime.
* @n: The integer to be checked.
* @i: The divisor to check.
*
* Return: 1 if n is a prime number, 0 otherwise.
*/
int is_prime_number_helper(int n, int i)
{
if (i * i > n)
return (1);
if (n % i == 0)
return (0);
return (is_prime_number_helper(n, i + 1));
}

/**
* is_prime_number - Function that returns 1 if the integer is a prime number,
* otherwise returns 0.
* @n: The integer to be checked.
*
* Return: 1 if n is a prime number, 0 otherwise.
*/
int is_prime_number(int n)
{
if (n <= 1)
return (0);
return (is_prime_number_helper(n, 2));
}
