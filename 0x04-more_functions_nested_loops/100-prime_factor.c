#include <stdio.h>

/**
 * main - print large prime factors
 *
 * Return: always 0.
 */

int main(void)
{
	int num = 612852475143;
	int q;

	for (q = 1; q <= num; q++)
	{
		if (num % q == 0)
		{
			printf("the prime factors of %d are: %d", num , q);
		}
		printf("\n");
	}
	return 0;
}
