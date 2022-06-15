#include "main.h"

/**
 * puts_half - print
 * @str: string
 * Return: always 0
 */

void puts_half(char *str)
{
	int q;

	for (q = 0; str[q] != '\0'; q++)
		;
q++;
for (q /= 2; str[q] != '\0'; q++)
{
	_putchar(str[q]);
}
_putchar('\n');
}
