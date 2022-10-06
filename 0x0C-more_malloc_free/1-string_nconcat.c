#include "main.h"
#include <stdlib.h>

/**
 * *string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: num of integers from second string
 * Return: new string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int i, len = 0;
char *new;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
for (i = 0; s1[i] != '\0'; i++)
{
len++;
}
new = malloc(sizeof(char) * (len + n + 1));
if (new == NULL)
{
return (NULL);
}
for (i = 0; i < len; i++)
{
new[i] = s1[i];
}
for (i = 0; s2[i] && i < n; i++)
{
new[i + len] = s2[i];
}
new[i + len] = '\0';
return (new);
}
