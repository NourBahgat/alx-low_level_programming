#include <stdio.h>
0;276;0c#include <stdlib.h>
#include <ctype.h>

/**
 * main - add positive integers
 * @argc: count of arguments
 * @argv: arguments passed to the executable
 * Return: 0
 */

int main(int argc, char *argv[])
{
int i, j;
int sum = 0;
for (i = 1; i < argc; i++)
{
for (j = 0; argv[i][j] != '\0'; j++)
{
if (!isdigit(argv[i][j]))
{
printf("Error\n");
return (1);
}
}
sum += atoi(argv[i]);
}
printf("%d\n", sum);
return (0);
}
