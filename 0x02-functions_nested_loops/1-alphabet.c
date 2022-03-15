#include "main.h"

/**
 * print_alphabet - print alphabet from a to z in lowe case
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	int alp;

	for (alp = 'a'; alp <= 'z'; alp++)
	{
		_putchar(alp);
	}
	_putchar('\n');

}

