#include "main.h"


/**
 * print_alphabet - prints alphabets in lowercase format
 *
 * Return: None
 */

void print_alphabet(void)
{
	char low_Case = 97;

	while (low_Case <= 122)
	{
		_putchar(low_Case);
		low_Case++;
	}
	_putchar('\n');
}
