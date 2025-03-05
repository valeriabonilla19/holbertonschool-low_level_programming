#include "main.h"
#include <stddef.h>

/**
* _strpbrk - Function that searches a string for any of a set of bytes.
* @s: the string to search in
* @accept: the set of characters to match
* Return: A pointers to the byte in s or NULL if no such byte is found.
*/

char *_strpbrk(char *s, char *accept)

{
while (*s)
{
char *a = accept;
while (*a)
{
if (*s == *a)
return (s);
a++;
}
s++;
}
return (NULL);
}
