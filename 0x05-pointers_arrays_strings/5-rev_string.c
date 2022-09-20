#include "main.h"

/**
 * rev_string - reverse string
 * @s: string to be reversed
 * Return: no return
 */

void rev_string(char *s)
{
int temp, count, i;
while (s[count])
{
if (count == '\0')
break;
count++;
}
for (i = 0; i < count / 2; i++)
{
temp = s[i];
s[i] = s[count - 1 - i];
s[count - 1 - i] = temp;
}
}
      
