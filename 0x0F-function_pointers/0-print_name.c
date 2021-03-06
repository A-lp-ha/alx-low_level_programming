#include "function_pointers.h"
#include <stddef.h>

/** print_name - print name
 * @name: name
 * @f: pointer
 * Return: always 0
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
