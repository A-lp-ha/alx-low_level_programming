#include "main.h"

/**
 * _atoi - convertion
 * @s: string convertion
 * Return: always 0
 */

int _atoi(char *s)
{
	int q = 1;
	unsigned int num = 0;

	do {
		if (*s == '-')
			q *= -1;
		else if (*s >= '0' && *s <= '9')
			num = (num * 10) + (*s - '0');
		else if (num > 0)
			break;
	} while (*s++);
	{};

	return (num * q);
}
