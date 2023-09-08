#include "main.h"
/**
 * string_nconcat - Concatenates two strings in an allocated memory
 * @s1: First string
 * @s2: Second string
 * @n: First n numbers of second string to append
 *
 * Return: Address of new string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, len1, len2, new_len;
	char *mem;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = 0;
	while (s1[len1] != '\0')
		len1++;
	len2 = 0;
	while (s2[len2] != '\0')
		len2++;

	if (n >= len2)
	{
		new_len = len1 + len2;
		n = len2;
	}
	else
	{
		new_len = len1 + n;
	}
	mem = malloc(sizeof(char) * new_len + 1);
	if (mem == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		mem[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
		mem[i] = s2[j];
		i++;
	}
	mem[i] = '\0';
	return (mem);
}
