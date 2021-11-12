#include "function_pointers.h"

/**
 *array_iterator - executes a function on each element of an array
 *@array: the array to execute function on
 *@size: size of array
 *@action: pointer to the function to execute
 *
 *Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int m;

	if (array == NULL || size == 0 || action == NULL)
		return;

	for (m = 0; m < size; m++)
	{
		action(array[m]);
	}
}
