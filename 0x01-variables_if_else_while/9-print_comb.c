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

	while (num1 <= num2)
	{
	putchar (num1);
	num1++;

	putchar (',');
	putchar (' ');
	}

	putchar ('\n');

	return (0);
}
