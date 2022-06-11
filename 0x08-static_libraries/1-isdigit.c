#include "main.h"

/**
 * _isdigit - checks for a digit(0 through 9)
 *
 * Return: 1 if @c is a digit, otherise return 0
 *
 * @c: to print hte digits
 *
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);

	else
		return (0);
}
