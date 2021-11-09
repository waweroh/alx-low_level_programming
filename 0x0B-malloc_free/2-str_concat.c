#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *str_concat - Concatenates two strings
 * @s1: string arguments
 * @s2: string argument to be concatenated to s1
 *
 * Return: NULL or address to memory
 */
char *str_concat(char *s1, char *s2)
{
	char *c;
	int i, j, m = 0, x = 0, y = 0, len;

	if (s2 == NULL)
	{
		s2 = "";
	}
	if (s1 == NULL)
	{
		s1 = "";
	}
	while (s1[x] != '\0')
	{
		x++;
	}
	while (s2[y] != '\0')
	{
		y++;
	}

	len = x + y + 1;
	c = (char *) malloc(len * sizeof(char));
	if (c == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < x; i++)
	{
		c[i] = s1[i];
	}
	for (j = i; j <= len; j++)
	{
		c[j] = s2[m];
		m++;
	}
return (c);
}
