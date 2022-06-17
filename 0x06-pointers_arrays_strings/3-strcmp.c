#include "main.h"
#include <stdio.h>

/**
 * _strcmp - Compares pointers to two strings
 * @s1: pointer
 * @s2: pointer
 * Return: always 0
 */


int _strcmp(char *s1, char *s2)
{

	while ((*s1 && *s2) && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

/**
 * main - entry point for comparison.
 *
 * Return: always 0.
 */

int main(void)
{
	char s1[] = "Hello";
	char s2[] = "World!";

printf("%d\n", _strcmp(s1, s2));
printf("%d\n", _strcmp(s2, s1));
printf("%d\n", _strcmp(s1, s1));
return (0);
}
