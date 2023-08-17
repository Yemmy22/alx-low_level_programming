#include "main.h"
/**
 * times_table -kjnjnj
 *
 * Return: knnk
 */
void times_table(void)
{
	int i = 0;
	int j, res;

	while (i <= 9)
	{
		j = 0;
		while (j <= 9)
		{
			res = i * j;
			if (res / 10 > 0)
			{
				_putchar(res / 10 + '0');
				_putchar (res % 10 + '0');
				if (j != 9)
				{
					_putchar (',');
					_putchar (' ');
				}
			}
			else
			{
				_putchar (res % 10 + '0');
				if (j != 9)
				{
					_putchar (',');
					_putchar (' ');
					_putchar (' ');
				}
			}
			j++;
		}
		_putchar('\n');
		i++;
	}
}
