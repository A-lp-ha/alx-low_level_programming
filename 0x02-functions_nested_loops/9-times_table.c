#include "main.h"
#include <stdio.h>
/**
 * times_table - time table for 9.
 *
 * return: always 0.
 */
void times_table(void)
{
int r;
int c;

for (c = 0; c <= 9; c++)
{
for (r = 0; r < 10; r++)
{
int answer = r * c;
if (r == 0)
{
_putchar(answer + '0');
}
else if (answer >= 10)
{
_putchar(' ');
_putchar(answer / 10 + '0');
_putchar(answer % 10 + '0');
}
else
{
_putchar(' ');
_putchar(' ');
_putchar(answer + '0');
}
if (r != 9)
{
_putchar(',');
}
}
_putchar('\n');
}
}
