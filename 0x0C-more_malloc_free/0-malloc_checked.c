#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory by malloc
 * @b: Memory size to be allocated
 *
 * Return: A pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *j = malloc(b);

	if (j == NULL)
		exit(98);

	return (j);
}
