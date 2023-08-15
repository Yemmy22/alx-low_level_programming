#include "main.h"
/**
 * print_alphabet- Prints lowercase alphabets
 *
 * Return: void
 */
void print_alphabet(void)
{
	int lwr = 97;
	int upr = 122;

	while (lwr <= upr)
		_putchar(lwr++);
	_putchar('\n');
}
