#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 * Return: 0 or 1
 */

int _strcmp(char *s1, char *s2)
{
int i;
int cond;
for (i = 0; s1[i] == s2[i] && s1[i] != '\0'; i++)
{
if (s1 > s2 || s2 > s1)
{
cond = 1;
}
else
{
cond = 0;
}
}
return (cond);
}
