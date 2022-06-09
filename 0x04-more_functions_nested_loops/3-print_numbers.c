#include "main.h"
#include <stdio.h>
#include <unistd.h>
/**
 * print_numbers - entry point
 *
 * return: always 1.
 */
void print_numbers(void)
{
	int a = 0;

	while  (a <= 9)
	{
		_putchar(a + '0');
		a++;
	}
	_putchar('\n');
}
