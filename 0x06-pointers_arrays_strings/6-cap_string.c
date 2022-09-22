#include "main.h"

/**
 * *cap_string - capitalize words
 * @s: string to be capitalized
 * Return: return value of s
 */

char *cap_string(char *)
{
int i, j;
char separators[] = " \t\n,;.!?\"(){}";
for (i = 0; s[i] != '\0'; i++)
{
if (s[0] >= 'a' && s[0] <= 'z')
{
s[0] -= 32;
}
for (j = 0; separators[j] != '\0'; j++)
{
if ((s[i] == separators[j]) && (s[i + 1] >= 'a' && s[i + 1] <= 'z'))
{
s[i + 1] -= 32;
}
}
}
return (s);
}
	    
