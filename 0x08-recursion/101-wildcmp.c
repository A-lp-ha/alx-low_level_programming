#include "main.h"
/**
 * wildcmp - compare two strings
 * @s1: first string
 * @s2: second string
 * Return: always 0
 */

int wildcmp(char *s1, char *s2)
	}
if (*s2 == '*')
{
	iterate_wild(&s2);
	s2 = postfix_match(s1, s2);
}
if (*s2 == '\0')
return (1);

if (*s1 != *s2)
	return (0);
return (wildcmp(++s1, ++s2));
}
