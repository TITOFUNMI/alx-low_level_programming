#include "main.h"

/**
 * malloc_checked - a function that allocates memory using malloc.
 * @b: amount of bytes
 *
 * Return: pointer to the allocated memory.
 */

void *malloc_checked(unsigned int b)
{
	char *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);

	return (p);

}

