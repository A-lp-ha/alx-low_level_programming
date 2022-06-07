#include "main.h"
#include <unistd.h>
/**
 * main - check the code
 *
 * description: print 10x the alphabet
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
int i;
for (i =0; i < 10; i++)
{
char dd;
for(dd = 'a'; dd <= 'z'; dd++)
{
_putchar(dd);
}
_putchar('\n');
}
}
