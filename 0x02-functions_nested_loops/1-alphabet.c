#include "main.h"
#include <stdio.h>
#include <unistd.h>
/**
 * print_alphabet- entry point
 * description: a function that prints the alphabet
 * return: void
 */
void print_alphabet(void)
{
	char letter ='a';
	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
