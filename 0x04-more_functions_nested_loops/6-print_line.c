#include "main.h"
/**
 * print_line - Draws a straight line
 * @n: The input number
 *
 * Return: Nothing
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for  (i =  0; i < n; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
