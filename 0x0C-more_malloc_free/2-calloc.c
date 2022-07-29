#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: number of array elements
 * @size: byte size of each element
 * Return: pointer to array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *c;
	void *m;

	if (nmemb == 0 || size == 0)
		return (NULL);

	m = malloc(nmemb * size);
	if (m == NULL)
		return (NULL);

	c = m;
	i = 0;
	while (i < (nmemb * size))
	{
		c[i] = '\0';
		i++;

	}
	return (m);
}
