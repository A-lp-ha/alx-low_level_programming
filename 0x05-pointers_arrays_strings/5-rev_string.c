#include "main.h"

/**
 * rev_string - print in reverse
 * @s: string
 * Return: always 0
 */
void rev_string(char *s)
{
	int len, q, half;
	char temp;

	for (len = 0; s[len] != '\0'; len++)
		;
	q = 0;
	half = len / 2;

	while (half--)
	{
		temp = s[len - q - 1];
		s[len - q - 1] = s[q];
		s[q] = temp;
		q++;
	}
}
