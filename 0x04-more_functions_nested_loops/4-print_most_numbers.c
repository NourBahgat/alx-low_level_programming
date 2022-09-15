#include "main.h"

/**
 * print_most_numbers - print numbers except 2,4
 *
 *Return: no return
 */

void print_most_numbers(void)
{
int n;
for (n = 0; n <= 9; n++)
{
if (n == '2' || n == '4')
{
n++;
}
else
{
_putchar(n + '0');
}
}
_putchar('\n');
}
