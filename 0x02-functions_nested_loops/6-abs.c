#include "main.h"

/**
 * _abs - Prints absolute numbers
 * @n: Input number to be converted
 *
 * Return: absolute value.
 */

int _abs(int n)
{
	if (n > 0)
	{
		return (n * 1);
	}

	else if (n < 0)
	{
		return (n * -1);
	}

	else
		return (0);
}
