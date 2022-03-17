#include "main.h"

/**
 * print_diagonal - a function that draws a diagonal line on the terminal.
 *
 * @n: the number that prints the line
 *
 */

void print_diagonal(int n)
{
	int a;
	int b;

	if (n > 0)
	{
		for (a = 0; a < n; a++)
		{
			for (b = 0; b < a; b++)
				_putchar(' ');
			_putchar('\\');

			if (a == n - 1)
				continue;

			_putchar('\n');
		}
	}

	_putchar('\n');
}
