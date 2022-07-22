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
	argc = 0;

	while (*argv != NULL)
	{
		argv++;
		argc++;
	}
	printf("%d\n", argc - 1);
	return (0);
}
