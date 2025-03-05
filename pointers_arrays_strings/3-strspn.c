#include "main.h"

/**
* _strspn - gets the length of a prefix substring
* @s: the string to search in
* @accept: the set of characters to match
* Return: the number of bytes in the initial segment of s
* which consist only of bytes from accept.
*/

unsigned int _strspn(char *s, char *accept)
{
unsigned int count = 0;
int i, found;
for (; *s != '\0'; s++)
{
found = 0;
for (i = 0; accept[i] != '\0'; i++)
{
if (*s == accept[i])
{
found = 1;
break;
}
}
if (!found)
break;
count++;
}
return (count);
}
