#include "main.h"
/**
 * _abs- Prints absolute value of an input number
 *
 * @n: Number to be inputed
 * Description: The function prints the non-negative
 * version of input number, which is its absolute value,
 * regardless its sign
 *
 * Return: The absolute value of the input
 */
int _abs(int n)
{
	if (n < 0)
		return (n * (-1));
	else
		return (n);
}

