#include "main.h"
/**
 * print_diagonal - Prints diagonal line
 * on last count of input number
 * @n: Input number
 *
 * Return: Nothing
 */
void print_diagonal(int n)
{
	int i = 0;
	int j;

	if (n > 0)
	{
		while (i < n)
		{
			j = 0;
			while (j <= i)
			{
				_putchar (' ');

				if (j == i)
				{
					_putchar('\\');
					_putchar('\n');
				}
				j++;
			}
			i++;
		}
	}
	else
		_putchar('\n');
}
