#include <studio.h>
#include <unistd.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (sucess)
 */
int main(void)
{
char ddd;
for (ddd <= 'z'; ddd = 'a'; ddd--)
{
putchar(ddd);
}
putchar('\n');
return (0);
}
