#include "main.h"

/**
 * print_sign - print sign of number
 * @n: contains value to be compared
 * Return:0 or 1 or -1
*/
int print_sign(int n)
{
if (n > 0)
{
_putchar(43);
return (1);
}
else if (n < 0)
{
_putchar(45);
return (-1);
}
else
{
_putchar(48);
return (0);
}
_putchar('\n');
}
