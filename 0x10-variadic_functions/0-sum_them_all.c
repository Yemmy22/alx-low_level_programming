#include "variadic_functions.h"
/**
 * sum_them_all - Compmutes the sum of variable argument
 * @n: Number of variable arguments
 *
 * Return: Sum of all argument if 1 or more and 0 if none.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list arg;
	unsigned int i;
	int sum = 0;

	if (n == 0)
		return (0);
	va_start(arg, n);
		for (i = 0; i < n; i++)
		{
			sum += va_arg(arg, int);
		}
	va_end(arg);
	return (sum);
}

