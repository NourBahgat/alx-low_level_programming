#include "main.h"
#include <stdlib.h>

/**
 * *str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: s1
 */

char *str_concat(char *s1, char *s2)
{
int i;
int k = 0;
int j = 0;
char *new;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
while (s1[k] != '\0')
k++;
while (s2[j] != '\0')
j++;
new = malloc(sizeof(char) * (j + k + 1));
if (new == NULL)
return (NULL);
for (i = 0; i < k; i++)
{
new[i] = s1[i];
}
for (i = 0; i < j; i++)
{
new[i + k] = s2[i];
}
new[j + k] = '\0';
return (new);
}
