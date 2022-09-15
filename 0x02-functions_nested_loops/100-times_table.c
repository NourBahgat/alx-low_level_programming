#include "main.h"

/**
 * print_times_table - prints times table
 * @n : times table to use
 * Return:void
*/

void print_times_table(int n)
{
int x, y, z;
if (n > 15 || n < 0)
return;
for (x = 0; x <= n; x++)
{
for (y = 0; y <= n; y++)
{
z = x * y;
if (y == 0)
_putchar('0' + z);
else if (z < 10)
{
_putchar(' ');
_putchar(' ');
_putchar(z + '0');
}
else if (z < 100)
{
_putchar(' ');
_putchar('0' + z / 10);
_putchar('0' + z % 10);
}
else
{
_putchar(z / 100 + '0');
_putchar((z - 100) / 10 + '0');
_putchar(z % 10 + '0');
}
if (y < n)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
}
