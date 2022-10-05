#include "main.h"
#include <stdlib.h>

/**
 * **alloc_grid - return a pointer to a 2d array
 * @width: width of the array
 * @height: height of the array
 * Return: array
 */

int **alloc_grid(int width, int height)
{
int i, j;
int **array;
if (width <= 0 || height <= 0)
return (NULL);
array = malloc(height * sizeof(int *));
if (array == NULL)
return (NULL);
for (i = 0; i < height; i++)
{
array[i] = malloc(width * sizeof(int));
if (array[i] == NULL)
{
while (i >= 0)
{
free(array[i]);
i--;
}
free(array);
return (NULL);
}
for (j = 0; j < width; j++)
array[i][j] = 0;
}
return (array);
}
