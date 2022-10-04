#include <stdlib.h>
#include "main.h"

/**
 * *_strdup - duplicate string
 * @str: string to be duplicated
 * Return: new string
 */

char *_strdup(char *str)
{
int i;
int count = 0;
char *new;
if (str == NULL)
{
return (NULL);
}
for (i = 0; str[i] != '\0'; i++)
{
count++;
}
new = malloc(sizeof(char) * (count + 1));
if (new == NULL)
{
return (NULL);
}
for (i = 0; str[i]; i++)
{
new[i] = str[i];
}
new[count] = '\0';
return (new);
}
