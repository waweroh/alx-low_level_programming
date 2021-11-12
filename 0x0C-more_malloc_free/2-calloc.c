#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array
 * @nmemb: unsigned integer in the array
 * @size: Size of elements in the array
 *
 * Return: Pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ch;
	unsigned int k;
	char *i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ch = malloc(nmemb * size);
	if (ch == NULL)
		return (NULL);

	i = ch;
	for (k = 0; k < (size * nmemb); k++)
		s[k] = 0;
	return (ch);
}
