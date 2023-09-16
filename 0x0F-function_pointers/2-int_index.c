#include "function_pointers.h"
/**
 * int_index - searches for an integer in an array
 * @array: Pointer to array elements to be searched and evaluated
 * @size: size of the array
 * @cmp: Pointer to function evelauting array element
 *
 * Return: Index of element if it does not evaluate to zero or
 * -1 if otherwise
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL || cmp == NULL)
	{
		if (size <= 0)
			return (-1);
		for (i = 0; i < size; i++)
		{
			if (cmp(*(array + i)) != 0)
				return (i);
		}
	}
	return (-1);
}
