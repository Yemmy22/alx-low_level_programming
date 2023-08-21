#include "main.h"
/**
 * print_rev - Prints input string in reverse
 * @s: Input string pointer
 *
 * Return: nothing
 */
void print_rev(char *s)
{
	int i, j;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}

	for (j = i - 1; s[j] >= 1; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
