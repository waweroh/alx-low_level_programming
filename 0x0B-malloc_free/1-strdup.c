#include "main.h"
#include <stdlib.h>
/**
 * *_strdup - returns a pointer to a new string which is
 * a duplicate of the string.
 * @str: string to duplicate.
 * Return: return NULL or pointer to the string.
 **/

char *_strdup(char *str)
{
	char *dupl;
	int a, b;

	if (str == NULL)
		return (NULL);
	a = 0;
	while (str[a] != '\0')
		a++;
	dupl = malloc (sizeof(*str) * a);
	if (dupl == NULL)
		return (NULL);

	b = 0;
	while (str[b] != '\0')
	{
		dupl[b] = str[b];
		b++;
	}
	return (dupl);
}
