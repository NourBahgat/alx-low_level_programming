#include "function_pointers.h"

/**
 * int_index - search for an integer in an array
 * @array: array to be searched
 * @size: size of the array
 * @cmp: pointer to function
 */

int int_index(int *array, int size, int (*cmp)(int))
{
unsigned int i;
if (cmp && array)
{
if (size <= 0)
return -1;
for (i = 0; i < size; i++)
{
if (cmp(arrat[i]))
{
return i;
}
}
}
return -1;
}
