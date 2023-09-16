#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_numbers - Prints integer argument followed by newline
 * @separator: String between numbers to be printed
 * @n: Number of arguments to be printed
 *
 * Return: Nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	unsigned int i;

	if (separator != NULL)
	{
		va_start(arg, n);
		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(arg, int));
			if (i < n - 1)
			{
				printf("%s", separator);
			}
		}
		va_end(arg);
	}
	printf("\n");
}
