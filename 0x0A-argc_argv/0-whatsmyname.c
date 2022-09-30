#include <stdio.h>

/**
 * main - print file name followed by a new line
 * @argc: count of arguments
 * @argv: arguments passed to the executable
 * Return: 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
printf("%s\n", argv[0]);
return (0);
}
