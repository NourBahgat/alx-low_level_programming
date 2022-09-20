#include "main.h"

/**
 * print_rev - print the reverse of the string
 * @s: string
 * Return: no return
 */

void print_rev(char *s)
{
int i, count = 0;
while (s[count])
{
if (s[count] == '\0')
break;
count++;
}
for (i = count - 1; i >= 0; i--)
{
_putchar(s[i]);
}
_putchar('\n');
}
