#include "main.h"

/**
 * *_strcat - concatenate two strings
 * @dest: first string
 * @src: second string
 * Return: return value of dest
 */

char *_strncat(char *dest, char *src, int n)
{
int i = 0, j;
while (dest[i] != '\0')
{
i++;
}
for (j = 0; j < n; src[j] != '\0'; j++)
{
dest[i] = src [j];
i++;
}
dest[i] = '\0';
return (dest);
}
