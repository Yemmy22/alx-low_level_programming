#include "main.h"
/**
 * print_last_digit - Prints the last digit of any given number
 * @n: The input number to be checked
 *
 * Return: The value of the last digit of inputed number
 */
int print_last_digit(int n)
{
	if (n < 0)
		n *= -1;

	_putchar ((n % 10) + '0');
	return (n % 10);

}
