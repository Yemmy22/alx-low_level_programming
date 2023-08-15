#include "main.h"
/**
 * print_sign - The function prints + or - or zero
 *
 * @n: The number to be inputed
 * Descripton: Prints + signs if number is greater than 0,
 * - if the numebr is les than zero,
 *   0 if the number is equal to zero
 * Return: 1 if greater than 0, -1 if less, and 0 if neither
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}

	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}

	else
		_putchar('0');
	return (0);
}
