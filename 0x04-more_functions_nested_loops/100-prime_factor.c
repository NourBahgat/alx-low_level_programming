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
int oddmax, evenmax;
n = 612852475143;
evenmax = 0;
oddmax = 3;
while (n % 2 == 0)
{
evenmax = 2;
n /= 2;
}
while (n != 1)
{
while (n % oddmax == 0)
{
evenmax = oddmax;
n /= oddmax;
}
oddmax += 2;
}
printf("%d is the largest prime factor", evenmax);
return (0);
}
