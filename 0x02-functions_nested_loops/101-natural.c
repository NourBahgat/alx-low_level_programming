

0;276;0c#include <stdio.h>
#include <stdio.h>

/**
 * prints sum of multiples of 3 or 5 below 1024
 *
 * Return:void
*/

int main(void)
{
int i, sum = 0;
for (i = 0; i < 1024; i++)
{
if (i % 3 == 0 || i % 5 == 0)
{
sum = sum + i;
printf("%d", sum);
}
}
putchar('\n');
return (0);
}
