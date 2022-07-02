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
	int u_alpha = 65;
	int not_u_alpha = 91;

	while (low_alpha < not_alpha)
	{
		putchar (low_alpha);
		low_alpha++;
	}

	while (not_u_alpha > u_alpha)
	{
		putchar (u_alpha);
		u_alpha++;
	}

	putchar ('\n');

	return (0);
}
