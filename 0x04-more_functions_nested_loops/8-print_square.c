#include "main.h"

/**
 * print_square - print squares
 * @size: variable
 * return: always 0.
 */
void print_square(int size)
{
	int a = 0;

while (a <= 10)
{
	for (size = '0'; size <= '8'; size++)
	{
		_putchar('#');
	}
	_putchar('\n');
	a++;
}
return (0);
}
