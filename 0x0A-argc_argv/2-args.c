#include "main.h"
/**
 * main - Entry point
 * @argc: Number of string arguments
 * @argv: Pointer to an array of string argument
 *
 * Return: 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	char **p = argv;

	while (*p != NULL)
	{
		printf("%s\n", *p);
		p++;
	}
	return (0);
}
