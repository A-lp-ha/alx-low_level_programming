#include "main.h"

/**
 * *_memset - fill memory
 * @s:pointer
 * @b: constant
 * @n: max
 * Return: always 0.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++, n--)
	{
		s[i] = b;
	}

	return (s);
}
