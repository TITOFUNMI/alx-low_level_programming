#include "main.h"

/**
 * print_numbers - function that print the number from 0 to 9
 *
 * return: 0 ALways
 *
 */

void  print_numbers(void)
{
	int a;

	for (a = '0'; a <= '9'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
