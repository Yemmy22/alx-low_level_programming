#include "main.h"
#include <unistd.h>

/**
 * print_numbers - outputs numbers 0-9
 *
 * Return: None
 */

void print_numbers(void)
{
	char i = 48;

	while (i <= 57)
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}

