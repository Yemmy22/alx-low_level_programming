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

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
