#include "main.h"

/**
* print_rev - Function that prints a string in reverse
* @s: a string should be printed
*/

void print_rev(char *s)
{
int length;
for (length = 0; s[length] != '\0'; length++)
;
for (length = length - 1; length >= 0; length--)
{
_putchar(s[length]);
}
_putchar('\n');
}
