#include "main.h"

/**
 * _strchr -  function to locate a character in a string
 * @s: string
 * @c: character
 * Return: Returns a pointer
 */

char *_strchr(char *s, char c)
{
	unsigned int index = 0;

	for (; *(s + index) != '\0'; index++)
		if (*(s + index) == c)
			return (s + index);
	if (*(s + index) == c)
		return (s + index);
	return ('\0');

}
