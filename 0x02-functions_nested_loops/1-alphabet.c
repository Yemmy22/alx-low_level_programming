#include "main.h"


/**
 * print_alphabet - prints lowercse alphabets
 *
 * Return: Always (void)
 */

void print_alphabet(void)
{
	char low_Case = 97;

	while (low_Case <= 122)
	{
		_putchar(low_Case);
		low_Case++;
	}
}
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	print_alphabet();
	_putchar('\n');

	return (0);
}
