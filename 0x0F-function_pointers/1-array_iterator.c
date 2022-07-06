#include "function_pointers.h"
/**
 * array_iterator - Executes a function
 * @size: size
 * @action: pointer to function
 * @array: array
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		RETURN;

	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}
