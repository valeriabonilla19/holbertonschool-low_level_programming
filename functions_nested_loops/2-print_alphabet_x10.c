#include "main.h"

/**
* print alphabet -  Write the alphabet 10 times
* in lowercase followed by a new line
*/

void print_alphabet_x10(void)
{
int i, l;
for (i = 0; i < 10; i++)
{
for (l = 97; l <= 122; l++)
{
_putchar(l);
}
_putchar('\n');
}
}
