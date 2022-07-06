#include "main.h"

/**
 * print_to_98 - prints integers characters to 98
 * @n: input number
 *
 * Return: None
 */

void print_to_98(int n)
{
	while (n <= 98)
	{
		printf("%d, ", n);
		n++;
	}
	while (n >= 98)
	{
		printf("%d, ", n);
		n--;
	}
}
