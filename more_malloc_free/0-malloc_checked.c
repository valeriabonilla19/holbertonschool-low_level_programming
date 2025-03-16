#include <stdlib.h>
#include <stdio.h>

/**
* malloc_checked - Allocates memory using malloc.
* @b: The number of bytes to allocate.
*
* Return: A pointer to the allocated memory.
*         If malloc fails, the process terminates with status 98.
*/
void *malloc_checked(unsigned int b)
{
void *ptr;

ptr = malloc(b);
if (ptr == NULL)
{
exit(98);
}

return (ptr);
}
