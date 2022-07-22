#include "main.h"

/**
 * _pow_recursion - computes the power of an integer input by another
 * @x: base intger input
 * @y: power integer input
 *
 * Return: power.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x  * _pow_recursion(x, y - 1));
}
