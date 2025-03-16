#include <stdlib.h>

/**
* _calloc - Allocates memory for an array, using malloc.
* @nmemb: The number of elements to allocate.
* @size: The size of each element.
*
* Return: A pointer to the allocated memory, or NULL if allocation fails
*         or nmemb or size is 0.
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *ptr;
unsigned int total_size, i;
char *char_ptr;

/* If nmemb or size is 0, return NULL */
if (nmemb == 0 || size == 0)
return (NULL);

/* Calculate total memory to allocate */
total_size = nmemb * size;

/* Allocate memory */
ptr = malloc(total_size);

/* If malloc fails, return NULL */
if (ptr == NULL)
return (NULL);

/* Set the allocated memory to zero */
char_ptr = (char *)ptr;
for (i = 0; i < total_size; i++)
char_ptr[i] = 0;

return (ptr);
}
