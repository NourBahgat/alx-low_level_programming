#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the largest prime factor
 *
 * Return: always 0
 */

int main(void)
{
unsigned long int n;
unsigned long int div, max, ans;
n = 612852475143;
div = 2;
ans = 0;
while (n != 0)
{
if (n % div != 0)
{
div = div + 1;
}
else
{
max = n;
n = n / div;
if (n == 1)
{
printf("%ld is the largest prime factor", max);
ans = 1;
break;
}
}
}
return (0);
}
