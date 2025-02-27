#include "main.h"

/**
* print_triangle - function that prints a triangle.
* @size: is the size of the triangle
* Use the character # to print the triangle
*/

void print_triangle(int size)
{
int row, space, hash;
if (size <= 0)
{
_putchar('\n');
}
for (row = 1; row <= size; row++)
{
for (space = size - row; space > 0; space--)
_putchar(' ');
for (hash = 1; hash <= row; hash++)
_putchar('#');
_putchar('\n');
}
}
