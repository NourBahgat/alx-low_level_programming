#include "main.h"
  
/**
 * print_number - print integer
 * @n: integer to be printed
 * Return: no return
 */

void print_number(int n)
{
unsigned int n1;
n1 = n;
if (n1 < 0)
{
_putchar('-');
n1 = -n1;
}
if (n1 / 10 != 0)
{
print_number(n1 / 10);
}
_putchar((n1 % 10) + '0');
}
