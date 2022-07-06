#include "main.h"

/**
 * _islower - Checks for lowercase character
 * @c: Character to be checked
 *
 * Return: 1 if true, 0 if false
 */

int _islower(int c)
{
	if ((c > 96) && (c < 123))
	return (1);

	else
	return (0);
}
