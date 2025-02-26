#include "main.h"
/**
* more_numbers - prints 10 times the numbers from 0 t 14.
*/

void more_numbers(void)
{
int i, l;
for (i = 0; i < 10; i++)
{
for (l = 0; l <= 14; l++)
{
if (l > 9)
_putchar((l / 10) + 48);
_putchar((l % 10) + 48);
}
_putchar('\n');
}
}
