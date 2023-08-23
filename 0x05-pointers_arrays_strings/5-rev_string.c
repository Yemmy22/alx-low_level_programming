#include "main.h"
/**
 * rev_string -  Prints input string in reverse order
 * @s: Input string string
 * 
 * Return: nothing
 */
void rev_string(char *s)
{
	int len = 0;
	int i, j, temp;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
		len++;
	}

	j = len - 1;
	i = 0;
	
	while (i < j)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;

		i++;
		j--;
	}
}
