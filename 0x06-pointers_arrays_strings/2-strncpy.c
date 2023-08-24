#include "main.h"
/**
 * _strncpy - Copies a number of characters of a string
 * @dest: The destination buffer
 * @src: The source string
 * @n: Th number of bytes to be copied
 *
 * Return: Pointer to destination buffer
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;

	}

	while (n > i)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
