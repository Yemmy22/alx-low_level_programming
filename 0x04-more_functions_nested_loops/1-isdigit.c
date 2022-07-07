#include "main.h"

/**
 * _isdigit - Checks for a digit 0-9
 * @c: integer input to be checked
 *
 * Return: 1 if true, 0 if false
 */

int _isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);
	else
		return (0);
}
