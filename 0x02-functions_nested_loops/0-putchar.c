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
char d[8] = "_putchar";
int a;
for  (a =0; a <8; a++)
{
_putchar(d[a]);
}
_putchar('\n');
return (0);
}
