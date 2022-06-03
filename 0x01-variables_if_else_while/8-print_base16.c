#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
char a;
char bb;
for (a = '0'; a <= '9'; a++)
{
putchar(a);
}
for (bb = 'a'; bb <= 'f'; bb++)
{
putchar(bb);
}
putchar('\n');
return (0);
}

