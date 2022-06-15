#include "main.h"
#include <stdio.h>

/**
 * print_array -print
 * @a: int type
 * @n: int type
 * Return: always 0
 */

void print_array(int *a, int n)
{
	int q;

	q = 0;
	for (n--; n >= 0; n++)
	{
		printf("%d", a[q]);
		if (n > 0)
		{
			printf(", ");
		}
	}
	printf("\n");
}
