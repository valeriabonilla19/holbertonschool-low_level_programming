#include <stdlib.h>

/**
* array_range - Creates an array of integers from min to max, inclusive.
* @min: The starting integer.
* @max: The ending integer.
*
* Return: A pointer to the newly created array of integers,
*         or NULL if min > max or if malloc fails.
*/
int *array_range(int min, int max)
{
int *arr;
int size, i;

/* If min > max, return NULL */
if (min > max)
return (NULL);

/* Calculate the size of the array */
size = max - min + 1;

/* Allocate memory for the array */
arr = malloc(size *sizeof(int));

/* If malloc fails, return NULL */
if (arr == NULL)
return (NULL);

/* Fill the array with values from min to max */
for (i = 0; i < size; i++)
arr[i] = min + i;

return (arr);
}
