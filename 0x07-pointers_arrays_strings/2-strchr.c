#include "main.h"

/**
 * _strchr - locate a character
 * @s: string
 * @c: character
 * Return: always  0.
 */

char *_strchr(char *s, char c)
{
int index;

for (index = 0; s[index] >= '\0'; index++)
{
if (s[index] == c)
return (s + index);
}
return ('\0');
}
