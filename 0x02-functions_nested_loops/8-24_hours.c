#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 *
 * Return: None
 */

void jack_bauer(void)
{
	int i = 0;
	int j, k, l;

	while (i < 3)
	{
		j = 0;

		while (j < 10)
		{
			if (i == 2 && j == 4)
			break;

			k = 0;

			while (k < 6)
			{
				l = 0;

				while (l < 10)
				{
					_putchar (i + '0');
					_putchar (j + '0');
					_putchar (':');
					_putchar (k + '0');
					_putchar (l + '0');
					_putchar ('\n');
					l++;
				}
				k++;
			}
			j++;
		}
		i++;
	}
}
