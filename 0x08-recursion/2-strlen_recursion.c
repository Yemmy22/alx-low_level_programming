#include "main.h"
/**
 * _strlen_recursion - Returns the lenght of a string
 * @s: Input string pointer
 *
 * Return: The lenght of a string
 */
int _strlen_recursion(char *s)
{
	int i;

	if (*s != '\0')
	{
		i = (1 + _strlen_recursion(s + 1));
	}
	else
		return (0);
	return (i);
}
