#include <stdio.h>

/**
 * main - print num of arguments followed by a new line
 * @argc: count of arguments
 * @argv: arguments passed to the executable
 * Return: 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
printf("%d\n", argc - 1);
return (0);
}
