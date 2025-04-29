#include "main.h"

/**
* get_bit - Returns the value of a bit at a given index.
* @n: The number whose bit value is to be checked.
* @index: The index of the bit to check.
*
* Return: The value of the bit at index or -1 if an error occurred.
*/
int get_bit(unsigned long int n, unsigned int index)
{
if (index >= sizeof(n) * 8)
return (-1);  /* Index is out of range */

return ((n >> index) & 1);  /* Shift the bit at the index and mask it */
}
