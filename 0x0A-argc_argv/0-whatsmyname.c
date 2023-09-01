#include "main.h"
/**
 * main - Entry point
 * @argc: Number of string arguments
 * @argv: Pointer to an array of string argument
 *
 * Return: 0
 */
int main(int argc, char **argv)
{

	if (argc > 0)
		printf("%s\n", *argv);
	return (0);
}
