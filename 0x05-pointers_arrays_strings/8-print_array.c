#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints the elements of an array
 * @a: Pointer to the array to be printed
 * @n: Number of elements of the array
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != n - 1)
			printf("%d, ", *(a + i));
		else
			printf("%d", *(a + i));
	}
	printf("\n");
}
