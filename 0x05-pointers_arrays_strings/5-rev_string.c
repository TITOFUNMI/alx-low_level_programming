#include "main.h"

/**
 * rev_string - functions to reverse a string
 *
 * @s: input string
 * Return: No string
 */

void rev_string(char *s)
{
	int str = 0, i, j;
	char temp;

	while (str >= 0)
	{
		if (s[str] == '\0')
			break;
		str++;
	}

	for (i = 0; i < (str - 1); i++)
	{
		for (j = i + 1; j > 0; j--)
		{
			temp = *(s + j);
			*(s + j) = *(s + (j - 1));
			*(s + (j - 1)) = temp;
		}
	}
}
