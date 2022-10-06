#include "main.h"
#include <stdlib.h>

/**
 * *_calloc - allocate memory for an array
 * @nmemb: number of elements
 * @size: number of bytes
 * Return: pointer to array
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int i;
char *array;
if (nmemb == 0 || size == 0)
{
return (NULL);
}
array = malloc(size * nmemb);
if (array == NULL)
return (NULL);
for (i = 0; i < (size * nmemb); i++)
{
array[i] = 0;
}
return (array);
}
