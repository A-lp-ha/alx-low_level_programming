#include <unistd.h>
#include "main.h"
/**
 * main - entry point
 *
 * Return: always 0.
 */
int _isalpha(int c)
{
char h;
for(h = 'a'; h <= 'z'; h++)
{
if(c == h)
{
return(1);
}
else if
{
return(0);
}
}
for(h = 'A'; h <= 'Z'; h++)
{
if (c == h)
{
return(1);
}
else
{
return(0);
}
}
return (0);
}
