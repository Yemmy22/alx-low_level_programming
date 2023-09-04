#include "main.h"
/**
 * _strdup - Duplicates a string in memory
 * @str: Input string to be copied
 *
 * Return: Pointer to the duplicate.
 */

char *_strdup(char *str)
{
	char *s;
	int lenght = 0;
	int i = 0;

	while (*s != '\0')
	{
		s++;
		lenght++;
	}

	s = malloc(sizeof(char) * lenght);

	if (s == NULL)
	{
		return (NULL);
	}
	else
	{
		while (i < lenght)
		{
			s[i] = str[i];
			i++;
		}
		s[i] = '\0';
	}

	return (s);
}
