#include "main.h"
/**
 * main - check the code
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
putchar(dd);
}
putchar('\n');
i++;
}
}
