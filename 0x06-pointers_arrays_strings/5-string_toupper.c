#include "main.h"

/**
 * string_toupper - change case
 * @str: string
 * Return: always 0
 */



char *string_toupper(char *str)
{
	int index = 0;

	while (str[index])
	{
		if (str[index] >= 'a' && str[index] <= 'z')
			str[index] -= 32;

		index++;
	}
	return (str);
}
