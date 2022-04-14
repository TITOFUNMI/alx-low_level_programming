#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - print numbers, followed by a new line
 * @separator: String to be printed betwwen the numbers
 * @n: number of intergers passed to the function
 *
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;

	va_list ap;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);

	}

	printf("\n");

	va_end(ap);
}



