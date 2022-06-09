#include "main.h"
#include <stdio.h>
/**
 * print_line - prints lines
 * @n: variable
 *
 * return: 0
 */
void print_line(int n)
{
	int a = 0;

	while (a < n && n > 0)
	{
		_putchar('_');
		a++;
	}
	_putchar('\n');
}
