#include <stdio.h>
/**
 * main- Entry Point
 *
 * Return: 0
 */
int main(void)
{
	int alpha = 97;
	int upr_alpha = 122;

	while (alpha <= upr_alpha)
	{

		if (alpha != 101 && alpha != 113)
		{
			putchar(alpha);
		}
		alpha++;
	}
	putchar('\n');
	return (0);
}
