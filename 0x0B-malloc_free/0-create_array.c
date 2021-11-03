#include <stdlib.h>
#include "main.h"


/**
 * create_array - creates an array of characters.
 * @size: size of array
 * @c: size to initialize array
 *
 * Return: returns the created array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *name = malloc(size * sizeof(char));

	if (size == 0)
		return (NULL);

	if (name == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		name[i] = c;
	}

	return (name);
}
