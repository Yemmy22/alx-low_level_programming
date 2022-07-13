#include "main.h"

/**
 * _puts - prints string to stdout
 * @str: character string pointer
 *
 * Return: nothing
 */

void _puts(char *str)
{
	for (; *str != '\0'; str++)
		_putchar (*str);

	_putchar ('\n');
}
