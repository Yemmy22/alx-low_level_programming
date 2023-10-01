#include "main.h"
/**
 * binary_to_uint - Converts binary to decimal
 * @b: Address of binary input
 *
 * Return: A non negative decimal conversion of the binary
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int num = 0;

	if (b == NULL)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if ((b[i] == 48) || (b[i] == 49))
		{
			num <<= 1;
			num += (b[i] - '0');
		}
		else
			return (0);
	}
	return (num);
}
