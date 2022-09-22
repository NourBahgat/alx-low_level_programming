#include "main.h"

/**
 * *string_toupper - concatenate two strings
 * 
 * Return: return value of dest
 */

char *string_toupper(char *)
{
char s[];
int i;
for (i = 0; s[i] != '\0'; i++)
{
if (i >= 'a' && i <= 'z')
{
s[i] = s[i] - 32;
}
}
return (0);
}
