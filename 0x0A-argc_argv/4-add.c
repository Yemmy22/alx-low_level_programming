#include "main.h"
/**
 * main - Entry point
 * @argc: Number of string arguments
 * @argv: Pointer to an array of string argument
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	char **p = argv + 1;
	int zero = 0;

	int sum = 0;


	if (argc == 1)
	{
		printf("%d\n", zero);
	}
	else if (argc > 1)
	{
		while (*p != NULL)
		{
			if (**p < 48 || **p > 57)
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				sum += atoi(*p);
			}
			p++;
		}
		printf("%d\n", sum);
	}
	return (0);
}
