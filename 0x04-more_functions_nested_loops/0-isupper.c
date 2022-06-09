#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <ctype.h>
/**
 * _isupper - check the code
 * @c: integer
 * description - give answer
 * return:1 if true, 0 if false
 */
int _isupper(int c)
{
if (c >= 65 && c <= 90)
{
return (1);
}
return (0);
}

