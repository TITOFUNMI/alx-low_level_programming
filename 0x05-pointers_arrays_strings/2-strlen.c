#include "main.h"

/**
 * _strlen - returns the length of a string
 *
 * @s: variable for the result
 * Return: Always 0
 *
 */

int _strlen(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
		count++;
	return (count);

}
