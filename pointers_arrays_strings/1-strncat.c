#include <string.h>
#include "main.h"
#include <stdio.h>

/**
* _strncat - Concatenates two strings, using at most n bytes from src
* @dest: The destination string
* @src: The source string to append
* @n: Maximum number of bytes to use from src
*
* Return: Pointer to the resulting string dest
*/
char *_strncat(char *dest, char *src, int n)
{
int i = 0;
int j = 0;

if (dest == NULL || src == NULL)
return (NULL);

while (dest[i] != '\0')
i++;

while (src[j] != '\0' && j < n)
{
dest[i] = src[j];
i++;
j++;
}

dest[i] = '\0';

return (dest);
}
