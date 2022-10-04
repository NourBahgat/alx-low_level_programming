#include "main.h"
#include <stdlib.h>

/**
 * *create_array - create an array
 * @size: size of array
 * @c: character to be stored
 */

char *create_array(unsigned int size, char c)
{
unsigned int i;
char *cr;
if (size == 0)
return (NULL);
cr = malloc(sizeof(c) * c);
if (cr == NULL)
return (NULL);
for (i = 0; i < size; i++)
cr[i] = c;
return (cr);
}
