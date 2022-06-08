#include <stdio.h>
#include "main.h"
#include <unistd.h>
/**
 * print_to_98 - prints all natural numbers
 * @n: integer input
 * description: prints all natural number
 * Return: always 0.
 */
void print_to_98(int n)
{
if (n < 98)
{
while (n < 98)
{
printf("%d, ", n);
n++;
}
}
else if (n > 98)
{
while (n > 98)
{
printf("%d, ", n);
n--;
}
}
printf("98\n");
}
