#include "search_algos.h"
/**
 * linear_search - searches for a value in an array of
 * integers using the Linear search algorithm.
 *
 * @array:  pointer to the first element of the array to search in
 * @size: size of the array
 * @value: value to search in the array
 *
 * Return: index of found value or -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t m = 0;
	int n = 0;

	if (array == NULL)
		return (-1);

	for (m = 0; m < size; m++, n++)
	{
		printf("Value checked array[%d] = [%d]\n", n, array[n]);
		if (array[n] == value)
			return (n);
	}

	return (-1);
}
