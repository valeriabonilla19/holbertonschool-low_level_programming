#include "main.h"
#include <stddef.h>

/**
* _strcpy - Copies a string from src to dest, including a null byte
* @dest: The buffer to copy the string into
* @src: The string to be copied
*
* Return: Pointer to dest
*/

char *_strcpy(char *dest, char *src)
{
int i = 0;
if (dest == NULL || src == NULL)
return (NULL);
while (src[i] != '\0')
{
dest[i] = src[i];
i++;
}
dest[i] = '\0';
return (dest);
}
