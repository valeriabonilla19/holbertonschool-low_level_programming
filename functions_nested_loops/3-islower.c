#include "main.h"

/**
* _islower - Checks if a character is lowercase
* @c: The character to check
*
* Description: Uses _putchar to display '1' for lowercase and '0' otherwise.
*
* Return: 1 if c is lowercase, 0 otherwise
*/
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
_putchar('1');
_putchar('\n');
return (1);
}
else
{
_putchar('0');
_putchar('\n');
return (0);
}
}
