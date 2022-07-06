#include "main.h"

/**
 * print_alphabet_x10 - Prints alpbabet in lowercase ten times
 *
 * Return: None
 */

void print_alphabet_x10(void)
{
	int i = 0;
	char low_Case;

	while (i < 10)
	{
		low_Case = 97;

		while (low_Case <= 122)
		{
			_putchar(low_Case);
			low_Case++;
		}
		_putchar('\n');
		i++;
	}
}
