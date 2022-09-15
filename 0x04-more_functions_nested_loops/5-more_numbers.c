#include "main.h"

/**
 * more_numbers - prints the numbers, from 0 to 14
 * followed by a new line
 */

void more_numbers(void)
{
int n;
for (n = 0; n <= 14; n++)
{
if (n > 9)
{
_putchar(n / 10 + '0');
_putchar(n % 10 + '0');
}
else
{
_putchar(n + '0');
}
}
_putchar('\n');
}
