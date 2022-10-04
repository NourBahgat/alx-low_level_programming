#include <stdlib.h>
#include "main.h"

/**
 * *_strdup - duplicate string
 * @str: string to be duplicated
 * Return: new string
 */

char *_strdup(char *str)
{
if (str == NULL)
{
return (NULL);
}
char *new;
new = malloc(sizeof(*str) * (strlen(str) + 1));
while (*str != '\0')
{
*new = *str;
str += 1;
new += 1;
}
*new = '\0';
free(new);
return (new);
}
