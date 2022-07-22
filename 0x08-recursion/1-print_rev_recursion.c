#include "main.h"

/**
 * _print_rev_recursion - prints input string in reverse
 * @s: pointer to string input
 *
 * Return: none
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	else
		_print_rev_recursion(s + 1);

	_putchar(*s);
}
