#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings
 * @s1: string to be appended
 * @s2: string to append
 * @n: bytes of string to append
 * Return: s1 + s2
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *m;
	unsigned int i = 0, j = 0, l, s = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[i])
		i++;

	while (s2[j])
		j++;

	if (n >= j)
		l = i + j;

	else
		l = i + (j - (j - n));

	m = malloc(sizeof(char) * l + 1);
	if (m == NULL)
		return (NULL);

	j = 0;
	while (s < l)
	{
		if (s <= i)
		m[s] = s1[s];

		if (s >= i)
		{
			m[s] = s2[j];
			j++;
		}
		s++;
	}
	m[s] = '\0';
	return (m);
}
