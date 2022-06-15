#include "main.h"

/**
 * swap_int - swap values
 * @a:pointer
 * @b:pointer
 * Return:always 0;
 */

void swap_int(int *a, int *b)
{
	*a += *b;
	*b = *a - *b;
	*a = *a - *b;
}
