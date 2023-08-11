#include <stdio.h>
/**
 * main- Entry Point
 *
 * Description: The main function
 * Return: 0
 */

int main(void)
{
	int lwr_alnum = 48;
	int upr_alnum = 57;

	while (lwr_alnum <= upr_alnum)
	{
		putchar(lwr_alnum);
		lwr_alnum++;
	}
	lwr_alnum += 39;
	upr_alnum += 45;

	while (lwr_alnum <= upr_alnum)
	{
		putchar(lwr_alnum);
		lwr_alnum++;
	}

	putchar('\n');
	return (0);
}
