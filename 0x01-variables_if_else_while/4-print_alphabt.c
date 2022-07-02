#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int low_alpha = 97;
	int not_alpha = 123;

	while (low_alpha < not_alpha)
	{
	if (low_alpha == 101 || low_alpha == 113)
	low_alpha++;

	putchar (low_alpha);
	low_alpha++;
	}
	putchar ('\n');

	return (0);
}
