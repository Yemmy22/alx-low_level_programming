#include "main.h"
/**
 * jack_bauer - Prints every minute of the day.
 *
 * Return: 0 if successful
 */
void jack_bauer(void)
{
	int i = 0, day = 24, hour = 60;
	int j;

	while (i < day)
	{
		j = 0;
		while (j < hour)
		{
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
			_putchar(':');
			_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
			_putchar('\n');

			j++;
		}
		i++;
	}
}
