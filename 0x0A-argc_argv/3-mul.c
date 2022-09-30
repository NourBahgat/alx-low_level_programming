#include <stdio.h>

/**
 * main - print product of two numbers
 * @argc: count of arguments
 * @argv: arguments passed to the executable
 * Return: 0
 */

int main(int argc, char *argv[])
{
if (argc != 3)
{
printf("Error\n");
return (1);
}
printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
return (0);
}
