#include "main.h"
/**
 * string_toupper - Changes all lowercase letters of a string
 * to upperscase
 * @s: Pointer to string input
 *
 * Return: Pointer to converted string
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 97 && s[i] <= 122)
			s[i] -= 32;
		i++;
	}
	return (s);
}
