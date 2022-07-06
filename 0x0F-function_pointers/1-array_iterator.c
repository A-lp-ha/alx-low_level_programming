#include "function_pointers.h"
#include <stddef.h>
/**
 * array_iterator - Executes a function
 * @size: size
 * @action: pointer to function
 * @array: array
 *Return: always 0
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;

	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}
