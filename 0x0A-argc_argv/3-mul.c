#include <stdio.h>

/**
 * main - print product of two numbers
 * @argc: count of arguments
 * @argv: arguments passed to the executable
 * Return: 0
 */

int main(int argc, char *argv[])
{
int p;
p = atoi(argv[1]) * atoi(argv[2]);
if (argc == 3)
{
printf("%d\n", p);
}
else
{
printf("error\n");
return (1);
}
return (0);
}
