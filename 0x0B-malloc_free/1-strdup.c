#include "main.h"
#include <stdlib.h>


/**
 * _strdup - Creates copy of input string in another memory
 * @str: input string
 * Return: pointer to duplicate string
 */

char *_strdup(char *str)
{
	int i = 1;
	int j;
	char *m;

	if (str == NULL)
		return (NULL);

	while (str[i])
	{
		i++;
	}
	m = malloc(i * sizeof(char) + 1);

	if (m == NULL)
		return (NULL);

	j = 0;
	while (j < i)
	{
		m[j] = str[j];
		j++;
	}
	m[j] = '\0';

	return (m);
}
