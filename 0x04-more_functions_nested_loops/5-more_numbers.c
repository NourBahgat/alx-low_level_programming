#include "main.h"

/**
 * more_numbers - prints the numbers, from 0 to 14
 * followed by a new line
 * Return: no return
 */

void more_numbers(void)
{
int i, n;
for (i = 0; i < 10; i++)
{
for (n = 0; n <= 14; n++)
{
if (n > 9)
{
_putchar(n / 10 + '0');
}
_putchar(n % 10 + '0');
}
_putchar('\n');
}
}
