#include "main.h"
#include <stdio.h>

void times_table(void){
	int r;
	int c;
	int answer = r * c

	       for (c = 0; c < 10; c++){
	       for (r = 0; r < 10; r++){
	if (r == 0){
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
		_putchar(',');
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
