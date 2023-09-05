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

		p = malloc(sizeof(char) * lenght + 1);

		while (i <= lenght)
		{
			p[i] = str[i];
			i++;
		}
	}
		return (p);
}
