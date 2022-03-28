#include "main.h"

/**
 * _memset -  function to fil memory wuth constant byte
 * @s: memory area
 * @b: constant byte
 * @n: bytes filled
 * Return: a pointer to the memory s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index;
	unsigned char value = b;

	for (index = 0; index < n; index++)
		*(s + index) = value;

	return (s);
}
