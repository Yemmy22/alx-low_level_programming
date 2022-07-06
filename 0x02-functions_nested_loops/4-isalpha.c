#include "main.h"

/**
 * _isalpha -Checks for alphabetic character
 * @c: Character to be checked
 *
 * Return: 1 if true, 0 if false
 */

int _isalpha(int c)
{
	if (((c > 96) && (c < 123)) || ((c > 64) && (c < 91)))
	return (1);

	else
	return (0);
}
