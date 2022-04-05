#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 * @s1: first string.
 * @s2: second string
 *
 * Return: pointer of an array of chars
 */

char *str_concat(char *s1, char *s2)
{
	char *st;
	unsigned int i, j, k, end;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; i != '\0'; i++)
		;

	for (j = 0; j != '\0'; j++)
		;

	st = malloc(sizeof(char) * (i + j + 1));

	if (st == NULL)
	{
		free(st);
		return (NULL);
	}

	for (k = 0; k < i; k++)
		st[k] = s1[k];

	end = j;
	for (j = 0; j <= end; k++, j++)
		st[k] = s2[j];

	return (st);
}
