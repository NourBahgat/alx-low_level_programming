#include "main.h"

/**
 * *leet - encode string
 * @s: string to be encoded
 * Return: return value of s
 */

char *leet(char *s)
{
int i, j;
char c[] = "ol_ea__t";
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; c[j] != '\0'; j++)
{
if (s[i] == c[j] || s[i] = c[j] - 32)
{
s[i] = j + '0';
}
}
}
return (s);
}
