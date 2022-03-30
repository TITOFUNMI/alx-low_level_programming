#include "main.h"

/**
 * swap_int - funtcion that swaps the value of two integers.
 *
 * @a: first value to swap
 * @b: second value to swap
 *
 * Return: Always 0;
 *
 */

void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}
