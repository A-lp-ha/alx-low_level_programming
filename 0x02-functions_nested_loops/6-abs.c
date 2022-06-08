#include <unistd.h>
#include "main.h"
#include <stdio.h>
/**
 * _abs -entry point
 * @n: integer received
 * description: absolute values
 *
 * Return: always 0.
 */
int _abs(int n)
{
if (n > 0)
{
	return (n);
}
else if (n < 0)
{
	return (-n);
}
else
{
	return (n);
}
}
