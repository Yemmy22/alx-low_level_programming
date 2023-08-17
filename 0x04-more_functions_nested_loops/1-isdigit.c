#include "main.h"
/**
 * _isdigit- Checks for a digit
 * @c: Character input to be checked
 *
 * Return: i if true, 0 if false
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
