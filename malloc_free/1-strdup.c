#include <stdlib.h>
#include <stdio.h>

/**
* _strdup - Duplicates a string in a newly allocated memory space
* @str: The string to duplicate
*
* Return: Pointer to the duplicated string, or NULL if insufficient memory
*/
char *_strdup(char *str)
{
char *dup;
unsigned int i, len = 0;

if (str == NULL)
return (NULL);

while (str[len] != '\0')
len++;

dup = malloc((len + 1) * sizeof(char));
if (dup == NULL)
return (NULL);

for (i = 0; i < len; i++)
dup[i] = str[i];
dup[len] = '\0';

return (dup);
}
