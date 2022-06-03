#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (sucess)
 */
int main(void)
{
int dddd;
for (dddd = 'a'; dddd <= 'z'; dddd++)
{
putchar(dddd);
}
for (dddd = 'A'; dddd <= 'Z'; dddd++)
{
putchar(dddd);
}
putchar('\n');
return (0);
}

