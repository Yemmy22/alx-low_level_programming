#include "main.h"
/**
 * swap_int - Swaps the values of input integer pointers
 * @a: First integer pointer
 * @b: Second integer pointer
 *
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
