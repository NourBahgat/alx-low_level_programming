#include "main.h"

/**
 * puts2 - print every other character
 * @str: string
 * Return: no return
 */

void puts2(char *str)
{
int i, count = 0;
while (str[count] != '\0')
{
count++;
}
for (i = 0; i <= count - 1; i += 2)
{
_putchar(str[i]);
}
_putchar('\n');
}
