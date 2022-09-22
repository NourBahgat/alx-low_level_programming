#include "main.h"

/**
 * reverse_array - concatenate two strings
 * @a: array to be reversed
 * @n:number of elements
 * Return: no return
 */

void reverse_array(int *a, int n)
{
int i;
int b[];
for (i = 0; i < n; i++)
{
b[n - 1 - i] = a[i];
}
for (i = 0; i < n; i++)
{
a[i] = b[i];
}
}
