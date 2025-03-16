#include <stdlib.h>

/**
* _strlen - A custom function to calculate the length of a string.
* @s: The string to calculate the length for.
*
* Return: The length of the string.
*/
unsigned int _strlen(char *s)
{
unsigned int len = 0;

/* If the string is not NULL, iterate to find its length */
while (s && s[len] != '\0')
len++;

return (len);
}

/**
* string_nconcat - Concatenates two strings.
* @s1: The first string.
* @s2: The second string.
* @n: The number of bytes from s2 to concatenate to s1.
*
* Return: A pointer to the newly allocated memory containing s1
*         followed by the first n bytes of s2, and null-terminated.
*         If the function fails, it returns NULL.
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *result;
unsigned int len1, len2, i, j;

/* If s1 is NULL, treat it as an empty string */
if (s1 == NULL)
s1 = "";

/* If s2 is NULL, treat it as an empty string */
if (s2 == NULL)
s2 = "";

len1 = _strlen(s1);  /* Use custom _strlen function */
len2 = _strlen(s2);  /* Use custom _strlen function */

/* If n is greater than or equal to the length of s2, use the entire s2 */
if (n >= len2)
n = len2;

/* Allocate memory for the concatenated string */
result = malloc(len1 + n + 1);  /* +1 for the null-terminator */

/* Check if memory allocation was successful */
if (result == NULL)
return (NULL);

/* Copy s1 to the result */
for (i = 0; i < len1; i++)
result[i] = s1[i];

/* Copy the first n bytes of s2 to the result */
for (j = 0; j < n; j++)
result[i + j] = s2[j];

/* Null-terminate the result */
result[i + j] = '\0';

return (result);
}
