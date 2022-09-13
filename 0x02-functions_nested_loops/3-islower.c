#include "main.h"
/**
 * _islower - determine lowercase characters
 * @c: contains value to be compared
 * Return: Always 0.
*/
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
_putchar(49);
}
else
{
_putchar(48);
}
_putchar('\n');
return (0);
}
