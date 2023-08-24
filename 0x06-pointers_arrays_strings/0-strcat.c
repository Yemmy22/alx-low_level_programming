#include "main.h"
/**
 * _strcat - Joins two strings together
 * @dest: First pointer to string input
 * @src: Second pointer to string input
 *
 * Return: pointer to joined string
 */
char *_strcat(char *dest, char *src)
{
	char *count = dest;
	int dest_end = 0;
	int n;

	while (*count != '\0')
	{
		dest_end++;
		count++;
	}

	n = 0;
	while (src[n] != '\0')
	{
		dest[dest_end + n] = src[n];
		n++;
	}
	dest[dest_end + n] = '\0';

	return (dest);
}


