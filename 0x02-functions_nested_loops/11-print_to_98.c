#include <stdio.h>
#include "main.h"
/**
 * main - entry
 *
 * Return: always 0.
 */
void print_to_98(int n)
{
if (n<98)
{
while (n<98)
{
printf("%d",n);
n++;
}
}
if(n>98)
{
while(n>98)
{
printf("%d",n);
n--;
}
}
printf("98\n");
}
