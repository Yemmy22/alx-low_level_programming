#include <stdio.h>
/**
 * main- Entry point
 *
 * Return: 0
 */
int main(void)
{
	int lwr = 48;
	int upr = 57;
	int j;

	while (lwr <= upr)
	{
		j = lwr + 1;
		while (j > lwr && j <= upr)
		{
			putchar(lwr);
			putchar(j++);
			if (lwr != upr - 1)
			{
				putchar(',');
				putchar(' ');
			}
		}
		lwr++;
	}
	putchar('\n');
	return (0);
}
