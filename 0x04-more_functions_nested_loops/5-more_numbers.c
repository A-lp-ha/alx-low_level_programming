#include "main.h"
#include <stdio.h>
/**
 * more_numbers - prints 0 -14
 *
 * return: void
 */
void more_numbers(void)
{
	char a;
	char b;
	char o = 0;

	while (o < 10)
	{
		for (a = 0; a <= 14; a++)
		{
			b = a;
			if (a > 9)
			{
				_putchar('1');
				b = a % 10;
			}
			_putchar('0' + b);
		}
		_putchar('\n');
		o++;
	}
}
