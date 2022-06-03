#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
char dddd;
for (dddd = 'a'; dddd <= 'z'; dddd++)
{
if( dddd != 'q'&& dddd != 'e')
{
putchar(dddd);
}
else
{
}
}
putchar('\n');
return (0);
}
