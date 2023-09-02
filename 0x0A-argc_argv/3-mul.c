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
	int result;
	char *c = "Error";

	if (argc < 2)
	{
		printf("%s\n", c);
		return (1);
	}
	else
	{
		result = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", result);
	}
	return (0);
}
