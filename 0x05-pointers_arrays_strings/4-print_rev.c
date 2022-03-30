#include "main.h"

/**
 * print_rev -  function to print a string in reverse, followed bt a new line
 *
 * @s: print the string in reverse;
 *
 * Return: always 0;
 *
 */

void print_rev(char *s)
{
	int str = 0;

	while (str >= 0)
	{
		if (s[str] == '\0')
			break;
		str++;
	}

	for (str--; str >= 0; str--)
		_putchar(s[str]);
	_putchar('\n');
}


