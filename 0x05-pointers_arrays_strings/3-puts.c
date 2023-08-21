#include "main.h"
/**
 * _puts - prints input string followed by a new line
 * @str: pointer to character string input
 *
 * Return: nothing
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != 0)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
