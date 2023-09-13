#include "function_pointers.h"
/**
 * array_iterator - Executes parameter function pointer
 * using elelement of parameter array
 * @array: Parameter array pointer
 * @size: Parameter array size
 * @action: Pointer to function to be executed
 *
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(*(array + i));
		}
	}
}

