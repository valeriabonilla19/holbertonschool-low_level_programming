#include <stdlib.h>
#include <stdio.h>

/**
* alloc_grid - Allocates a 2D array of integers and initializes elements to 0
* @width: Number of columns
* @height: Number of rows
*
* Return: Pointer to the allocated grid, or NULL on failure
*/
int **alloc_grid(int width, int height)
{
int **grid;
int i, j;

if (width <= 0 || height <= 0)
return (NULL);

grid = malloc(height * sizeof(int *));
if (grid == NULL)
return (NULL);

for (i = 0; i < height; i++)
{
grid[i] = malloc(width * sizeof(int));
if (grid[i] == NULL)
{
while (i--)
free(grid[i]);
free(grid);
return (NULL);
}
for (j = 0; j < width; j++)
grid[i][j] = 0;
}

return (grid);
}
