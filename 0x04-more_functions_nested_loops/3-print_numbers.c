#include "main.h"
#include <stdio.h>
#include <unistd.h>
/**
 * print_numbers - entry point
 *
 * return: void
 */
void print_numbers(void)
{
	int a;

	for (a = '0'; a <= '9'; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
