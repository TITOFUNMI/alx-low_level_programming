#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function that return the sum of all its parameter
 * @n: unsigned int
 *
 * Return:if n == 0, return 0, else return sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	int sum;

	va_start(ap, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);

	va_end(ap);
	return (sum);
}
