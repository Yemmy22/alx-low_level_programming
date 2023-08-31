#include "main.h"
/**
 * _pow_recursion - Returns the value of a number's exponent
 * @x: The number to be raise be raised to power
 * @y: The power the number is to be raised to
 *
 * Return: The value of the exponentiation
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
