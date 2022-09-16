#include <stdio.h>

/**
 * main - print the largest prime factor
 * 
 * Return: always 0
 */

int main()
{
unsigned long int n;
n = 612852475143;
unsigned long int div = 2, max;
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
printf("%d is the largest prime factor", max);
break;
}
}
}
return (0);
}
