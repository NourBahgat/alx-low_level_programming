#include "main.h"

/**
 * print_square - prints square
 * @size: size of square
 * Return: no return
 */

void print_square(int size)
{
int i, j;
for (j = 0; j < size; j++)
{
for (i = 0; i < size; i++)
{
_putchar('#');
}
_putchar('\n');
}
if (size <= 0)
{
_putchar('\n');
}
}
