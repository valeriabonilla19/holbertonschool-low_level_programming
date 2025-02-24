#include "main.h"

/**
* times_table - Prints the 9 times table, starting with 0.
*/
void times_table(void)
{
int row, col, prod;

for (row = 0; row <= 9; row++)
{
for (col = 0; col <= 9; col++)
{
prod = row * col;

if (col != 0)
{
_putchar(',');
_putchar(' ');

if (prod < 10)
_putchar(' ');
}

if (prod < 10)
_putchar(prod + '0');
else
{
_putchar((prod / 10) + '0');
_putchar((prod % 10) + '0');
}
}
_putchar('\n');
}
}
