#include "main.h"
#include <unistd.h>
/**
 * main - Entry point
 * description: print _putchar
 * Return: Always 0 (success)
 */
int main(void)
{
char dot[] = "_putchar\n";
int l = 0;
while (dot[l] != '\0')
{
char f = dot[l];
_putchar(f);
l++;
}
return (0);
}
