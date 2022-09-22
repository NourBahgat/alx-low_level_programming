#include "main.h"

/**
 * *_strncpy - copies two strings
 * @dest: first string
 * @src: second string
 * @n: number of chars to be copied
 * Return: return value of dest
 */

char *_strncpy(char *dest, char *src, int n)
{
int i;
for (i = 0; i < n && dest[i] != 0; i++)
{
src[i] = dest[i];
}
src[i] = '\0';
}
