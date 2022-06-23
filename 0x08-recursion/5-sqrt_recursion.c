#include "main.h"
#include <stdio.h>
#include <math.h>

/**
 * _sqrt_recursion - return square root
 * @n:number
 * Return: always 0
 */

int _sqrt_recursion(int n)
{
int squareroot = sqrt(n);

	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	return (squareroot);
}
