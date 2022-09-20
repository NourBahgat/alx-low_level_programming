#include "main.h"

/**
 * puts_half - print half string
 * @str: string to be printed
 * Return: no return
 */

void puts_half(char *str)
{
int count = 0, i, j;
while (str[count] != 0)
{
count++;
}
if (count % 2 == 0)
{
for (i = count / 2; i < count; i++)
{
_putchar(str[i]);
}
}
else
{
for (j = (count - 1) / 2; j < count - 1; j++)
{
_putchar(str[j + 1]);
}
}
_putchar('\n');
}
