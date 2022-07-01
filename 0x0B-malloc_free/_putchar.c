#include <unistd.h>
/**
 * _putchar - writes the character
 * @c: The character to print
 * Return: always 0
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
