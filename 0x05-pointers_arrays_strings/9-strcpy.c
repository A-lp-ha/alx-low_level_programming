#include "main.h"

/**
 * *_strcpy - copies
 * @dest: char variable
 * @src: char variable
 * Return: always 0
 */

char *_strcpy(char *dest, char *src)
{
	int q = -1;

	do {
		q++;
		dest[q] = src[q];
	} while (src[q] != '\0');
	{};
	return (dest);
}
