#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	int letters;
	for (letters = 'a'; letters <= 'z'; letters++)
	{
		if (letters != 'e'&& letters != 'q')
			putchar(letters);
	}
	putchar('\n');

	return (0);
}
