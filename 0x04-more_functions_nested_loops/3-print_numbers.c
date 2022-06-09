#include "main.h"
#include <stdio.h>
#include <unistd.h>
/**
 * main - entry point
 *
 * return: always 0.
 */
int main(void)
{
	int a;

	for (a = '0'; a <= '9'; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
