#include "main.h"
/**
 * _strdup - Duplicates a string in memory
 * @str: Input string to be copied
 *
 * Return: Pointer to the duplicate.
 */

char *_strdup(char *str)
{
	char *s = str;
	char *p;
	int lenght = 0;
	int i = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		while (*s != '\0')
		{
			s++;
			lenght++;
		}
		s = str;

		p = (char *)malloc(sizeof(char) * lenght + 1);

		if (p == NULL)
			return (NULL);

		while (i < lenght)
		{
			p[i] = str[i];
			i++;
		}
		p[i] = '\0';
	}
		return (p);
}
