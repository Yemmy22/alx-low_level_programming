#include "main.h"
/**
 * malloc_checked - Allocates memory using malloc
 * @b: Input size in bytes of memory to be allocated
 *
 * Return: The address of the memory
 */
void *malloc_checked(unsigned int b)
{
	unsigned int *mem;

	mem = malloc(b);

	if (mem == NULL)
		exit(98);
	return (mem);
}
