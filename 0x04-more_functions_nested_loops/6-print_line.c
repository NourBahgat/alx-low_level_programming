#include "main.h"

/**
 * print_line - Print line dependent on the integer n.
 * @n : The number of '_' characters to use
 * Return: Void.
 */

void print_line(int n)
{
if (n >= 0)
{
_putchar('\n');
}
else
{
int i;
for (i = 1; i <= n; i++)
{
_putchar('_');
}
}
_putchar('\n');
}
