#include <stdio.h>
#include <stdlib.h>

/**
 * main - main block
 * Description: computes and prints the sum of all the multiples of 3 or
 * 5 below 1024 (excluded), followed by a new line
 * Return: 0
*/

int main (void)
{
int i, sum;
for (i = 1; i <=50; i++)
{
sum = i + (i - 1);
printf("%d, ", sum);
if (i = 50)
printf("%d", sum);
}
return (0);
}
