#include "main.h"

/**
*_isupper - Checks for uppercase character.
*@c: The character to check
*
*Description - Uses _putchar to display '1' for uppercase and '0' otherwisse
*Return: 1 if c is uppercase, otherwise 0.
*/

int _isupper(int c)
{
if (c >= 65 && c <= 90)
{
return (1);
}
else
{
return (0);
}
}
