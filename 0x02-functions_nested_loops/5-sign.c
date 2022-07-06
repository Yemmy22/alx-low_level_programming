#include "main.h"

/**
 * print_sign -Prints the arithmetic sign of an integer
 * @n: The integer to be inputed
 *
 * Return: 1 if positive, -1 if negative, 0 if neither
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}

	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}

	else
	{
		_putchar('0');
	}
	return (0);
}
