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
	int hex;
	char hexi;

	for (hex = '0'; hex <= '9'; hex++)
		putchar(hex);

	for (hexi = 'a'; hexi <= 'f'; hexi++)
		putchar(hexi);
	putchar('\n');

	return (0);

}
