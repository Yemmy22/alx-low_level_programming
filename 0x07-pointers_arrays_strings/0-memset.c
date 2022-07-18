#include "main.h"

/**
 * _memset - sets n number of times a character b into the memory s points to
 * @s: memory pointer
 * @b: the character to fill
 * @n: number of times character is set
 *
 * Return: pointer to memeory
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);
}
