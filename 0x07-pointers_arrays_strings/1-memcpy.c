#include "main.h"

/**
 * _memcpy - function that copies memory area
 * @dest: destination memory area
 * @src: the source memory area
 * @n:  bytes filled
 * Return: the pointer to dest
 */


char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int index;

	for (index = 0; index < n; index++)
		*(dest + 1) = *(src + 1);

	return (dest);
}

