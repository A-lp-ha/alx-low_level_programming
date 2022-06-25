#include "main.h"
#include <unistd.h>

/**
 * _putchar -entry point
 * @c: character
 * Return: always 0
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
