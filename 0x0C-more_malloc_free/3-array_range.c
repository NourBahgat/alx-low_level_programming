#include "main.h"
#include <stdlib.h>

/**
 * *array_range - create an array
 * @min: min num
 * @max: max num
 * Return: return array
 */

int *array_range(int min, int max)
{
int i, j = 0;
int *array;
if (min > max)
{
return (NULL);
}
array = malloc(sizeof(int) * (max - min + 1));
if (array == NULL)
{
return (NULL);
}
for (i = min; i <= max; i++)
{
array[j] = i;
j++;
}
return (array);
}
