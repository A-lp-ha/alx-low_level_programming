#include "main.h"
#include <string.h>

/**
 * is_palindrome - check if string is a palindrome
 * @s: string
 * Return: always 0
 */

int is_palindrome(char *s)
{
	int len = strlen(s) - 1;

	while (len > *s)
	{
		if (*s++ != len--)
		{
			return (0);
		}
	}


	return (1);
}
