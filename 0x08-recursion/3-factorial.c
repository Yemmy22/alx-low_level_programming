#include "main.h"
/**
 * factorial - Returns the factorial of a given number
 * @n: Input number
 *
 * Return: factorial of n if greater than 0 or -1 if otherwise
 */
int factorial(int n)
{
	int result;

	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);

	result = n * factorial(n - 1);
	return (result);
}
