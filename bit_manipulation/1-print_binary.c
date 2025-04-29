#include "main.h"

/**
* print_binary - prints the binary representation of a number.
* @n: number to be printed in binary.
*/
void print_binary(unsigned long int n)
{
int bit_found = 0;
int i;

/* Iterate through all bits of n */
if (n == 0)
{
_putchar('0');
return;
}

for (i = sizeof(n) * 8 - 1; i >= 0; i--)
{
unsigned long int bit = (n >> i) & 1;

/* Print bit only if it is 1 or if we have already printed a 1 */
if (bit == 1)
{
_putchar('1');
bit_found = 1;
}
else if (bit_found)
{
_putchar('0');
}
}
}
