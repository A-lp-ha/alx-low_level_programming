#include <unistd.h>
/**
 * _putchar - writes the character
 * @c: character
 * Return: always 0
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
