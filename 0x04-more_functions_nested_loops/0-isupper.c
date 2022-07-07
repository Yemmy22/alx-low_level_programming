#include "main.h"

/**
 * _isupper - Function checks integer input to confirm uppercase character
 * @c: input to be checked
 *
 * Return: 1 if true, 0 if false
 */

int _isupper(int c)
{
	if ((c > 64) && (c < 96))
	{
		return (1);
	}
	else
		return (0);
}
