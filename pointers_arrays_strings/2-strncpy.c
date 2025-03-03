#include "main.h"

/**
* _strncpy - Copies a string, using at most n bytes from src
* @dest: The destination buffer
* @src: The source string to copy
* @n: Maximum number of bytes to copy
*
* Return: Pointer to the resulting string dest
*/
char *_strncpy(char *dest, char *src, int n)
{
int i;

for (i = 0; i < n && src[i] != '\0'; i++)
dest[i] = src[i];

for (; i < n; i++)
dest[i] = '\0';

return (dest);
}
