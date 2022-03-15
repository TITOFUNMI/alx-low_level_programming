#include "main.h"

/**
 * print_alphabet_x10 - a function that prints 10 times the alphabet
 * Return: Always 0 (success)
 */

void print_alphabet_x10(void)
{
	int a = 1, b = 10;
	int c = 'a';

	while (a <= b)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		a++;
		_putchar('\n');
	}
}
