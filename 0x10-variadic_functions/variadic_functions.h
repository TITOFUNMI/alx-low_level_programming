#ifndef VARIADIC_FUNCTION_H_
#define VARIADIC_FUNCTION_H_

#include <stdarg.h>

/**
 * struct printer - A new struct type defining a printer.
 * @symbol: A symbol representing a data type.
 * @print: A function pointer to a function that prints
 *
 */

typedef struct printer

{
	char *symbol;
	void (*print)(va_list arg);

} printer_t;


int _putchar(char c);
int sum_them_all(const unsigned int n, ...);

#endif /*Variadic Functions*/
