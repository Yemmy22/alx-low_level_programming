#include "main.h"
/**
 * _strcmp - Compares two strings
 * @s1: First string
 * @s2: Second string
 *
 * Return: 0 if equal, and a non-zero number if otherwse.
 */
int _strcmp(char *s1, char *s2)
{
	int temp = 0;
	int i = 0;

	while ((s1[i] != '\0' && s2[i] != '\0') && (temp == 0))
	{
		temp = s1[i] - s2[i];
		i++;
	}
	return (temp);
}

