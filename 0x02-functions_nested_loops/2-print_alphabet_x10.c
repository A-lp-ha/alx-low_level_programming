#include "main.h"
#include <unistd.h>
/**
 * print_alphabet_x10 -print alphabet
 *
 * description: print 10x the alphabet
 *
 * Return: always 0.
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
