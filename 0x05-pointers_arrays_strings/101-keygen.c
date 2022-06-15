#include "main.h"
#include <unistd.h>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - generation
 * Return: always 0
 */

int main(void)
{
	int sum;
	char q;

	srand(time(NULL));
	while (sum <= 2645)
	{
		q = rand() % 128;
		sum += q;
		putchar(q);
	}
	putchar(2772 - sum);
	return (0);
}
