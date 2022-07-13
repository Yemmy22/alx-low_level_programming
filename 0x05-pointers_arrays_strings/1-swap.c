#include "main.h"

/**
 * swap_int - swaps integer values in memory
 * @a: first integer
 * @b: second integer
 *
 * Return: None
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
