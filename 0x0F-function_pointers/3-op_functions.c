#include "function_pointers.h"

/**
 * op_add - Returns the sum of two numbers.
 * op_sub - Returns the difference of two numbers
 * op_mul - Returns the product of two numbers
 * op_div - Returns the division of two numbers
 * op_mod - Returns the remainder of the division of two numbers.
 * @a: The first number.
 * @b: The second number.
 * Return: always 0
 */

int op_add(int a, int b);
{
	return (a + b);
}
int op_sub(int a, int b);
{
	return (a - b);
}
int op_mul(int a, int b);
{
	return (a * b);
}
int op_div(int a, int b);
{
	return (a / b);
}
int op_mod(int a, int b);
{
	return (a % b);
}


