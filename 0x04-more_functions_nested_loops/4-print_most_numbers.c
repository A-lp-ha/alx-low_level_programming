#include "main.h"
#include <unistd.h>
#include <stdio.h>
/**
 * main - entry point
 *
 * return: always o.
 */
int main(void)
{
	int a;

	for (a = '0'; a <= '9'; a++)
	{
		if (a != '2' && a != '4'){
			putchar(a);
		}
		{
		}
	}
		putchar('\n');
	
		return (0);
}
