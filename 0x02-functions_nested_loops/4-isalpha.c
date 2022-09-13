#include "main.h"

/**
 * _isalpha - checks for alphabet
 * @c: contains value to be compared
 * Return: either 0 or 1
*/
int _isalpha(int c)
{
if (c >= 'A' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
_putchar('\n');
}
