#include <unistd.h>
#include "main.h"
/**
 * print_last_digit - printing lat digit
 * description: print the last digit of a number.
 * @n: integer input
 * Return: always 0.
 */
int print_last_digit(int n)
{
int last = (n % 10);
if (n > 0)
{
last = last * -1;
}
_putchar(last + '0');
return (0);
}
