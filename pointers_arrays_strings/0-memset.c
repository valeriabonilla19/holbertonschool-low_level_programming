#include "main.h"

/**
* _memset - fills memory with a constant byte
* @s: Pointer to the memory with a constant byte
* @b: Constant byte to fill the memory with
* @n: number of bytes to fill
*
* Return: pointer to the memory are s
*/

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}
