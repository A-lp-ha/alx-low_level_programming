#include "function_pointers.h"
#include <stdlib.h>

/**
 * get_op_func - Selects the correct function
 * @s: The operator passed as argument.
 * Return: always 0
 */



int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int a = 0;

	while (ops[i].op != NULL && *(ops[i].op) != *s)
		a++;

	return (ops[a].f);
}
