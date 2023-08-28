#include "main.h"
/**
 * _memcpy - Copies a memory area to another
 * @dest: Destination memory input to copy to
 * @src: Source memory input to copy from
 * @n: Byte number of memory to be copied
 *
 * Return: Character pointer to destination memory
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *d = dest;
	char *s = src;
	unsigned int i = 0;

	for (i = 0; i < n; i++)
	{
		d[i] = s[i];
	}
	return (d);
}
