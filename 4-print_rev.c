#include "main.h"

/**
 * print_rev - print in reverse
 * @s: string reference
 * Return:0
 */

void print_rev(char *s)
{
	int q = 0;

	while (s[i])
		q++;
	while (q--)
		_putchar(s[q]);
	_putchar('\n');
}
