#include "function_pointers.h"
#include <stdlib.h>
#include <stddef.h> 

/**
 * get_op_func - Selects the correct function
 * @s: The operator passed as argument.
 * Return: always 0
 */


op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};
int (*get_op_func(char *s))(int, int)
{	
	int i = 0;
	ops[];

	while (ops[i] != NULL && *(ops[i]) != *s)
		i++;

	return (ops[i]);
}
