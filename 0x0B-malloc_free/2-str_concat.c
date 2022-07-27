#include "main.h"
#include <stdlib.h>

/**
 * str_concat - joins two strings
 * @s1: string to join to
 * @s2: string to append
 * Return: pointer to joined string
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0;
	int j = 0;
	char *m;
	int len;
	int k;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[i])
		i++;

	while (s2[j])
		j++;

	len = i + j;
	m = malloc(sizeof(char) * len + 1);

	if (m == NULL)
		return (NULL);
	j = 0;
	k = 0;
	while (k < len)
	{
		if (k <= i)
			m[k] = s1[k];
		if (k >= i)
		{
			m[k] = s2[j];
			j++;
		}
		k++;
	}
	m[k] = '\0';
	return (m);
}



