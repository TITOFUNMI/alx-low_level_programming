#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main- entry point
 *
 * Return: Always 0 (success)
 *
 */

int main(void)
{
	int a = 1, b = 10;
	int c = 'a';

	while (a <= b)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			putchar(c);
		}
		a++;
		putchar('\n');
	}
	return (0);
}
