#include "main.h"

/**
 * print_most_numbers -  prints the number (0 to 9) without (2 and 4)
 *
 * value to be returned
 *
 */

void print_most_numbers(void)
{
	int a;

	for (a = '0'; a <= '9'; a++)
	{
		if (a != '2' && a != '4')
		_putchar(a);
	}

	_putchar('\n');
}
