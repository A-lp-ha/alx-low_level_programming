#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (sucess)
 */
int main(void)

{
int num;
for (num = 0; num < 10; num++)
{
putchar(num);
}
putchar('\n');
return (0);
}
