#include "main.h"

/**
 * _puts - funcion to print string
 * @str: string to be printed
 * Return: void
 */

void _puts(char *str)
{
int i = 0;
while (str[i])
{
_putchar(str[i]);
i++;
}
_putchar('\n');
}
