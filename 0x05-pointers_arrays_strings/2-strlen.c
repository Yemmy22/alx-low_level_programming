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
	int count = 0;

	for (i = 0; s[i] != '\0'; i++)
		count++;

	return (count);
}
