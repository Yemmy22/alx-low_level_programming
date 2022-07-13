#include "main.h"
/**
 * _strlen - takes the total count of character in a string within memory
 * @s: string in memory
 *
 * Return: count total integer
 */

int _strlen(char *s)
{
	int i;
	int count;

	for (i = 1; s[i] != 0; i++)
		count = i + 1;
	return (count);
}
