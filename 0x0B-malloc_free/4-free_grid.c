#include "main.h"
#include <stdlib.h>

/**
 * free_grid - free 2d array
 * @grid: array to be freed
 * @height: height of the array
 * Return: no return
 */

void free_grid(int **grid, int height)
{
if (grid != NULL && height !='\0')
{
while (height >= 0)
{
free(grid[height]);
height--;
}
free(grid);
}
}
	      
