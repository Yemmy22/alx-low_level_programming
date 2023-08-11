#include <stdio.h>
/**
 * main- Entry Point
 *
 * Return: 0
 */
int main(void)
{
	int lwr = 48;
	int upr = 57;
	int len = upr - lwr;

	while (lwr <= upr)
	{
		putchar(lwr++);
		if (len != 0)
		{
			putchar(',');
			putchar(' ');
		}
		len--;

	}
	putchar('\n');
	return (0);
}
