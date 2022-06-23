#include "main.h"

/**
 * _pow_recursion - return value
 * @x: number
 * @y: power
 * Return: always 0
 */

int _pow_recursion(int x, int y)
{
	int results = x;

	if (y < 0)
		return (-1);

	else if (y == 0)
		return (0);

	results *= _pow_recursion(x, y - 1);
	return (results);
}
