#include "main.h"

/**
* flip_bits - Returns the number of bits needed to flip to
* get from one number to another.
* @n: The first number.
* @m: The second number.
*
* Return: The number of bits you would need to flip to get from `n` to `m`.
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int diff = n ^ m;  /* XOR the numbers to find differing bits */
unsigned int count = 0;

while (diff > 0)  /* Count the set bits in the result of XOR */
{
count += diff & 1;  /* Increment count if the least significant bit is 1 */
diff >>= 1;  /* Shift the bits to the right to check the next bit */
}

return (count);
}
