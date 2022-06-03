#include <stdio.h>
#include <unistd.h>
/**
 * main -Entry point 
 *
 * Return: Always 0 (success)
 */
int main (void)
{
int n;
int i;
	
for (n = '0'; n <= '9'; n++)
{
for (i = '0'; i <= '9'; i++)
{
if (c < i)
{
putchar(c);
putchar(i);
if (c != '8' || (c == '8' && i != '9'))
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
			
