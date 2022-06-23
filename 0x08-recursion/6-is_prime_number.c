#include "main.h"

/**
 * is_divisible - checks divisibility
 * @num: number
 * @div: divisor
 * Return: always 0
 */

int is_divisible(int num, int div)
{
	if (num % div == 0)
		return (0);

	if (div == num / 2)
		return (1);

	return (is_divisible(num, div + 1));
}

/**
 * is_prime_number - checks number
 * @n: number
 * Return: always 0
 */

int is_prime_number(int n)
{
	int div = 2;

	if (n <= 0)
		return (0);

if (n >= 2 && n <= 3)
return (1);

	return (is_divisible(n, div));
}
