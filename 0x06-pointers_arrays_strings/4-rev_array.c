#include "main.h"

/**
 * reverse_array - reverse the content
 * @a: array
 * @n: array
 * Return: always 0
 */

void reverse_array(int *a, int n)
{
	int tmp, index;

	for (index = n - 1; index >= n / 2; index--)
	{
		tmp = a[n - 1 - index];
		a[n - 1 - index] = a[index];
		a[index] = tmp;
	}
}

/**
 * main - entry point
 *
 * Return: always 0.
 */

int main(void)
{
	return (0);
}
