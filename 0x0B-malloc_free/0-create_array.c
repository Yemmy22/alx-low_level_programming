#include "main.h"
/**
 * create_array - Creates an array of chars,
 * and initializes it with a specific char
 * @size: Size of the array
 * @c: Character to initialize the array with
 *
 * Return: Pinter to caharcter array
 */

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	s = malloc(sizeof(c) * size);

	if (s == NULL)
	{
		return (NULL);
	}
	else
	{
		i = 0;
		while (i < size)
		{
			s[i] = c;
			i++;

		}
	}
	return (s);
}
