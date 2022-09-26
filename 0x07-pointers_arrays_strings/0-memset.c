#include "main.h"

/**
 * *_memset - fills memory with a constant byte
 * @n: number of spaces to fill
 * @b: byte to be filled
 * @s: memory area
 * Return: memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
int i;
for (i = 0; i <= n; i++)
{
*(s + i) = b;
}
return (s);
}
