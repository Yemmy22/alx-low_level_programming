#include "main.h"
/**
 * _strlen- Returns the length of a string
 * @s: input string
 *
 * Return: an integer which is the string's lenght
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
