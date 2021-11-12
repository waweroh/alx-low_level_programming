#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers.
 * @min: first integer
 * @max: last integer
 *
 * Return: pointer to newly allocated memory or NULL if fails
 */
int *array_range(int min, int max)
{
	int a, b;
	int *z;

	if (min > max)
		return (NULL);
	b = max - min + 1;

	z = malloc(sizeof(int) * b);

	if (z == NULL)
		return (NULL);

	for (a = 0; a < b; a++, min++)
	{
		z[a] = min;
	}
	return (z);
}
