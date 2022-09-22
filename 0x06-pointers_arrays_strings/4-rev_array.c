#include "main.h"

/**
 * reverse_array - concatenate two strings
 * @a: array to be reversed
 * @n:number of elements
 * Return: no return
 */

void reverse_array(int *a, int n)
{
int i = 0;
int j = n - 1;
int temp;
while (j >= i)
{
temp = a[i];
a[i] = a[j];
a[j] = temp;
i++;
j--;
}
}
