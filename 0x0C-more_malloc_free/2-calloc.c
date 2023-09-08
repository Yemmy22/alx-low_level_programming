#include "main.h"
/**
 * _calloc - Allocates memory for an array using malloc
 * @nmemb: Number of array members
 * @size: Size of each member
 *
 * Return: The address of the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int *mem;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);

	mem = malloc(sizeof(size) * nmemb);
	if (mem == NULL)
		return (NULL);
	for (i = 0; i < nmemb; i++)
	{
		mem[i] = 0;
	}
	return (mem);
}
