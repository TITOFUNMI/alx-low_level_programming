#include "main.h"

/**
 * print_line - a function that draws a straight line in the terminal.
 *
 * @n: that displays the result
 *
 */

void print_line(int n)
{
	int a;

	if (n > 0)
	{
		for (a = 0; a < n; a++)
		{
			_putchar('_');
		}
	}

	_putchar('\n');
}
