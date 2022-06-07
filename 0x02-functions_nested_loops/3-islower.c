#include "main.h"
#include <unistd.h>
/**
 * _islower -entry point
 *
 * description: checks is a character is lowercase
 *
 * Return: Always 0.
 */
int _islower(int c)
{
int y = 'a';
for (y = 'a'; y <= 'z'; y++)
{
if (c == y)
{
return (1);
}
}
return (0);
}

