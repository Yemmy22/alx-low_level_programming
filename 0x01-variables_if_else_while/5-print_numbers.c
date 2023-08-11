#include <stdio.h>
/**
 * main- Entry Point
 *
 * Description: The main function
 * Return: 0
 */

int main(void)
{
	int num = 48;
	int upr_Num = 57;

	while (num <= upr_Num)
	{
		putchar(num);
		num++;
	}
	putchar('\n');
	return (0);
}
