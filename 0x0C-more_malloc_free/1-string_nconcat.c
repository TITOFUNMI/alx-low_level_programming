#include "main.h"

/**
 * string_nconcat -  a function that concatenates two strings.
 * @s1: first string
 * @s2: second string
 * @n: amount of bytes.
 *
 * Return: pointer to the allocated memory.
 * if malloc fails, status value is ewual to 98.
 *
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i, j, k, concat;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;

	for ( j = 0; s2[j] != '\0'; j++)
		;

	if (n > j)
		n = j;

	concat = i + n;
	str = malloc(concat + 1);

	if (str == NULL)
		return (NULL);

	for (k = 0; k < concat; k++)
		if (k < i)
			str[k] = s1[k];
		else
			str[k] = s2[k - i];

	str[i] = '\0';

	return (str);
}

