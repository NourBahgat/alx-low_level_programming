#include "main.h"
#include <stdlib.h>

/**
 * *malloc_checked - Returns a pointer to the allocated memory
 * @b: integer to be stored
 * Return: pointer
 */

void *malloc_checked(unsigned int b)
{
void *sawsan;
sawsan = malloc(b);
if (sawsan == NULL)
exit(98);
return (sawsan);
}
