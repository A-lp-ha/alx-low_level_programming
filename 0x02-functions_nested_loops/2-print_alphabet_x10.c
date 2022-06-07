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
char dd;
int i = '0';
while(i <= 10)
{
for(dd = 'a'; dd <= 'z'; dd++)
{
_putchar(dd);
}
_putchar('\n');
i++;
}
}
