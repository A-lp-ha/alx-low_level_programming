#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * _isdigit - entry point
 * @c:variable
 * return: 1 is true, 0 is false
 */
int _isdigit(int c)
{
if (c >= '0' && c <= '9')
return (1);

else
	return (0);
}
