#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
char dot[] = "_putchar\n";
int l = 0;
while(dot[l] != '\0')
{
char f = dot[l];
_putchar(l);
l++;
}
