#include "main.h"

/**
 * _strlen - prints the length of string
 * @s: string
 * Return: length of string
 */

int _strlen(char *s)
{
int i = 0;
while (s[i])
i++;
return (i);
}
