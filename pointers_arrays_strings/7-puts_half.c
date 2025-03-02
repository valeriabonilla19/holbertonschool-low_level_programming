#include "main.h"

/**
* puts_half - Prints the second half of a string
* @str: The string to be processed
*/
void puts_half(char *str)
{
int len = 0, n, i;

while (str[len] != '\0')
len++;

if (len % 2 == 0)
n = len / 2;
else
n = (len + 1) / 2;

for (i = n; i < len; i++)
_putchar(str[i]);

_putchar('\n');
}
