#include "main.h"
/**
 * print_alphabet_x10- Prints lowercase alphabets 10 times
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int first_line = 1;
	int last_line = 10;
	int lwr, upr;

	while (first_line <= last_line)
	{
		lwr = 97;
		upr = 122;
		while (lwr <= upr)
			_putchar(lwr++);

		_putchar('\n');
		first_line++;
	}
}
