#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * main - Entry
 * @argc: takes count of string arguments
 * @argv: array of strings to be counted
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i = 0;
	int mul;
	char *reterr = "Error\n";

	if (argc < 2)
	{
		printf("%s", reterr);
		return (1);
	}
	else
		while (i < argc)
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		i++;
	}

	printf("%d\n", mul);
	return (0);
}
