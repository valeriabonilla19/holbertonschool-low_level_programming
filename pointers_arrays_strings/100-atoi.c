#include "main.h"
#include <stddef.h>
#include <limits.h>

/**
* _atoi - Converts a string to an integer
* @s: The string to convert
*
* Return: The integer value of the string, or 0 if no numbers found
*/
int _atoi(char *s)
{
int sign = 1;
int num = 0;
int found_number = 0;

if (s == NULL)
return (0);

while (*s)
{
if (*s == '-')
sign *= -1;
else if (*s == '+')
sign *= 1;
else if (*s >= '0' && *s <= '9')
{
found_number = 1;
if (num > (INT_MAX - (*s - '0')) / 10)
return (sign == 1 ? INT_MAX : INT_MIN);
num = num * 10 + (*s - '0');
}
else if (found_number)
break;
s++;
}

return (num *sign);
}
