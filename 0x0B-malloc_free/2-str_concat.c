#include "main.h"
/**
 * str_concat - Concatenates two strings
 * @s1: string to append to
 * @s2: String to be appended
 *
 * Return: Pointer to memory of concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	int new_len;
	int i, j;
	int len1 = 0;
	int len2 = 0;
	char *mem;

	for (; s1[len1] != '\0'; len1++)
	for (; s2[len2] != '\0'; len2++)
	new_len = len1 + len2;
	mem = malloc(sizeof(char) * new_len + 1);
	if (mem == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < len1; i++)
		{
			mem[i] = s1[i];
		}
		for (j = 0; i > j && j < len2; j++)
		{
			mem[i] = s2[j];
			i++;
		}
	}
	return (mem);
}
