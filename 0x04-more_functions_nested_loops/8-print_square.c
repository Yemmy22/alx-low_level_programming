#include "main.h"
/**
 * print_square - Prints a square pattern followed by a new line
 * @size: Inpute number makes the size of the square
 *
 * Return: Nothing
 */
void print_square(int size)
{
	int i, j;

	if (size != 0 && size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 1; j <= size; j++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}

