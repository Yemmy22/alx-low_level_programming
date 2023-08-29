#include "main.h"
/**
 * _strpbrk - Searches a string for any set of bytes
 * @s: String input to be checked
 * @accept: String input with caharcters to be matched
 *
 * Return: Pointer to the first occurence of matching byte in s.
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int j;
	char *byte;

	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				byte = s + i;
				return (byte);
			}
			j++;
		}
		i++;
	}
	return ('\0');
}

