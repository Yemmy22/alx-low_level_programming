#include "main.h"

/**
 * _strchr - locates character in a string
 * @s: pointer to string
 * @c: charcater to be found
 *
 * Return: string if found, Null if not
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		++s;

		if (*s == c)
		{
			return (s);
		}

	}
	return (0);

}
