#include "main.h"
/**
 * _memset - Fills memory with a constant byte
 * @s: Pointer to memory to be filled
 * @b: Character string to fill
 * @n: Number of charcaters of the string to be filled.
 *
 * Return: Pointer to filled memory.
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *str = s;
	unsigned int i = 0;

	while (i < n)
	{
		str[i] = b;
		i++;
	}
	return (str);
}

