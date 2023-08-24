#include "main.h"
/**
 * _strncat - Joins two strings.
 * @dest: Destination string input
 * @src: Source string input
 * @n: Maximum number of character of src to be joined
 *
 * Description: Concatenates a maximum number of input character
 * of a source string to destination string and
 * returns an updated destination string's pointer
 *
 * Return: Destination string's pointer
 */
char *_strncat(char *dest, char *src, int n)
{
	char *dest_count = dest;
	int count = 0;
	int j;

	while (*dest_count != '\0')
	{
		count++;
		dest_count++;
	}

	j = 0;
	while (src[j] != '\0' && j < n)
	{
		dest[count + j] = src[j];
		j++;
	}
	return (dest);
}


