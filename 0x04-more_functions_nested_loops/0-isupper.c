#include "main.h"
#include <stdio.h>
#include <unistd.h>
/**
 * main - check the code
 *
 * return: always 0.
 */
int main(void)
{
char c;

c = 'A';
printf("%c: %d\n", c, _isupper(c));

c = 'a';
printf("%c: %d\n", c, _isupper(c)); 
return (0);
}

