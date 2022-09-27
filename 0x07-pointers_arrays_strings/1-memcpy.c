#include "main.h"

/**
 * *_memcpy - copy elements from one memory area to another
 * @src: first area
 * @dest: second area
 * @n: number of elements to be copied
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for(i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}
