#include "main.h"

/**
 * print_square - a function that prints a square, followed by a new line.
 *
 * @size: to print the result
 *
 */

void print_square(int size)
{
	int height, width;

	for (height = 0; height < size; height++)
	{
		for (width = 0; width < size; width++)
			_putchar('#');

		if (height == size - 1)
			continue;
		_putchar('\n');

	}
	_putchar('\n');
}
