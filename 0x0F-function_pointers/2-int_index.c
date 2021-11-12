#include "function_pointers.h"

/**
 * int_index - Searches for an integers
 * @array: Array to search through
 * @size: Size of array
 * @cmp: Pointer to function used to search integer
 *
 * Return: index of integer if cmp function doesn't return 0
 *         -1 if no element matches the search or if size <= 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
