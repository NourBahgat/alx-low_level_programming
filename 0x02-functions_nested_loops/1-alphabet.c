#include "main.h"
/**
 * main - print the alphabet
 *
 * return: nothing, return void
*/
void print_alphabet(void)
{
char alphabet;
for (alphabet = 'a'; alphabet < 'z'; alphabet++)
{
  _putchar(alphabet);
}
putchar('\n');
return (0);
}
