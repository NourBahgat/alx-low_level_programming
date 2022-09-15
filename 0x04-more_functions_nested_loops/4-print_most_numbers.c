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
_putchar(n + '0')
}
if (n == 2 || n == 4)
{
break;
}
_putchar('\n');
}
