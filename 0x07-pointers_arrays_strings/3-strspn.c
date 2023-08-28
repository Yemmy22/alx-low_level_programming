#include "main.h"
/**
 * _strspn - Gets the lenght of a prefixed substring
 * @s: String input to be checked
 * @accept: Sting input with caharcters to be matched
 *
 * Return: Byte number of initaial segment of s which consists
 * of charcaters (bytes) from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int j;
	unsigned int count = 0;

	while (accept[i] != '\0')
	{
		j = 0;
		while (s[j] != 44)
		{
			if (*(s + j) == *(accept + i))
				count++;
			j++;
		}
		i++;
	}
	return (count);
}

