#include "main.h"

/**
 * *string_toupper - convert from lowcase to upcase
 * @s: string to be converted
 * Return: return value of s
 */

char *string_toupper(char *s)
{
int i;
for (i = 0; s[i] != '\0'; i++)
{
if (i >= 'a' && i <= 'z')
{
s[i] = s[i] - 32;
}
}
return (s);
}
