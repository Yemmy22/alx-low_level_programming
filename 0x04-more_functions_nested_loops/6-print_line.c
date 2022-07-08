#include "main.h"

/**
 * print_line- draws a straight line on the terminal
 * @n: integer input
 *
 * Return: None
 */

void print_line(int n)
{
	int i = 0;

	while (i < n)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
