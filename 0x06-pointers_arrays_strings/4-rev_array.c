#include "main.h"
/**
 * reverse_array- Reverse content of an array
 * @a: Pointer to input array
 * @n: Size of the input array
 *
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int *arr = a;
	int start = 0;
	int end = n - 1;
	int temp;

	while (start < end - start)
	{
		temp = arr[start];
		arr[start] = arr[end - start];
		arr[end - start] = temp;

		start++;
	}
}
