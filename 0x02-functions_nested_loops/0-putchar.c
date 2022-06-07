#include "main.h"
#include <unistd.h>
/**
 * main - check code 
 *
 * description: print _putchar followed by new line
 *
 * Return: Always 0.
 */
int main(void)
{
char dot[8] = "_putchar";
int l;
for  (a =0; a <8; a++)
{
_putchar(dot[a]);
}
_putchar('\n');
return (0);
}
