#include "main.h"
#include <ctype.h>
/**
 * _islower - determine lowercase characters
 * @c: contains value to be compared
 * Return: Always 0.
*/
int _islower(int c)
{
int c;
if (islower(c) == 0)
{
_putchar(48);
}
else
{
_putchar(49);
}
_putchar('\n');
return (0);
}
