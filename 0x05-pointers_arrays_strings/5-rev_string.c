#include "main.h"

/**
 * rev_string - reverse string
 * @s: string to be reversed
 * Return: no return
 */

void rev_string(char *s)
{
int temp, count, count2, i;
while (s[count])
{
if (count == '\0')
{
break;
}
count++;
}
count2 = count - 1;
for (i = 0; i < count / 2; i++)
{
temp = s[i];
s[i] = s[count2];
s[count2--] = temp;
}
}
      
