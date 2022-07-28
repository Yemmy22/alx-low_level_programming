#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory to integer input
 * @b: integer input
 * Return: None
 */
void *malloc_checked(unsigned int b)
{
	int *n;

	n = malloc(b);
	if (n == NULL)
		exit(98);
	else
		return (n);
}
