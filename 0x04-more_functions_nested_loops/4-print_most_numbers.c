#include "main.h"
#include <unistd.h>

/**
 * print_most_numbers - outputs numbers 0-9
 *
 * Return: None
 */

void print_most_numbers(void)
{
	char i = 48;

	while (i <= 57)
	{
		if (i == 50 || i == 52)
		{
			i++;
		}
		_putchar(i);
		i++;
	}
	_putchar('\n');
}

