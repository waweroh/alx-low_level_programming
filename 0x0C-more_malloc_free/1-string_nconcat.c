#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenate two strings.
 * @s1: string 1
 * @s2: string 2
 * @n: number of bytes in s2
 *
 * Return: pointer null
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ch;
	int k;
	unsigned int j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	k = 0;
	while (s1[k] != '\0')
		k++;
	ch = malloc(sizeof(char) * (1 + n + k));
	if (ch == NULL)
		return (NULL);
	k = j = 0;
	while (s1[k] != '\0')
	{
		ch[k] = s1[k];
		k++;
	}
	while (j < n && s2[j] != '\0')
	{
		ch[k] = s2[j];
		k++, j++;
	}
	ch[k] = '\0';
	return (ch);
}
