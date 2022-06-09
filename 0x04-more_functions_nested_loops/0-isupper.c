#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <ctype.h>
/**
 * _isupper - check the code
 * @c: integer 
 * return: always 0.
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
return (1);
	}
return (0);

}

