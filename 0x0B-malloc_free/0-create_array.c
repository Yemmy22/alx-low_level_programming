#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates array of size 'size' initialised by c
 * @size: size of array
 * @c: character input
 *
 * Return: pointer to c
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0; 
        char *m;
	
	m = malloc(size * sizeof(c));
	
	if (size == 0)
	return (NULL);

	while (i < size)
	{
		m[i] = c;
		i++;
	}
	return (m);
}
