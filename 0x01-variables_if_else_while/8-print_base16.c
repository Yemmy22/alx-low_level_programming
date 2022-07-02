#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num1 = '0';
	int num2 = '9';
	char alpha = 'a';
	char omega = 'f';

	while (num1 <= num2)
	{
	putchar (num1);
	num1++;
	}
	while (alpha <= omega)
	{
	putchar (alpha);
	alpha++;
	}

	putchar ('\n');

	return (0);
}
