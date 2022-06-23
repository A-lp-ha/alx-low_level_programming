#include "main.h"

/**
 * factorial - factorial
 * @n: number
 * Return: always 0
 */

int factorial(int n)
{
	int result = n;

	if (n < 0)
		return (-1);

	else if (n >= 0 && n <= 1)
		return (1);

	result *= factorial(n - 1);
	return (result);
}
