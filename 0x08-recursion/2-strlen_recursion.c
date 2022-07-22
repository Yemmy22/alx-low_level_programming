#include "main.h"

/**
 * _strlen_recursion - prints lenght of string in input pointer
 * @s: pointer to string input
 *
 * Return: lenght of string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
		return (1 + _strlen_recursion(s + 1));
}
