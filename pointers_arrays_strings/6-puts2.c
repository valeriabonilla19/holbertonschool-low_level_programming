#include "main.h"
#include <stddef.h>

/**
* puts2 - function that prints every other character of a string,
* starting with the first character.
* @str. The string to be processed
*/

void puts2(char *str)
{
int i;
if (str == NULL)
return;
for (i = 0; str[i] != '\0'; i += 2)
{
_putchar(str[i]);
}
_putchar('\n');
}
