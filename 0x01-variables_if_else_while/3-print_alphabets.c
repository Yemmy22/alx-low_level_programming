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
		putchar(alpha);
		alpha++;
	}

	alpha -= 58;
	upr_alpha -= 32;
	while (alpha <= upr_alpha)
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');
	return (0);
}
