#include "3-calc.h"

/**
 * op_add - Returns the sum of a and b
 * @a: First integer
 * @b: Second integer
 * Return: Sum of a and b
 */

int op_add(int a, int b)
{
  return (a + b);
}

/**
 * op_sub - Returns the difference of a and b
 * @a: First integer
 * @b: Second integer
 * Return: Difference of a and b
 */

int op_sub(int a, int b)
{
  return (a - b);
}

/**
 * op_mul - Returns the product of a and b
 * @a: First integer
 * @b: Second integer
 * Return: Product of a and b
 */

int op_mul(int a, int b)
{
  return (a * b);
}

/**
 * op_div - Returns the remainder of a divided by b
 * @a: First integer
 * @b: Second integer
 * Return: Quotient of a and b, or error if b is 0
 */
int op_div(int a, int b)
{
  return(a / b);
}

/**
 * op_mod - Returns the remainder of a divided by b
 * @a: First integer
 * @b: Second integer
 * Return: Remainder of a divided by b, or error if b is 0
 */

int op_mod(int a, int b)
{
  return (a % b);
}
