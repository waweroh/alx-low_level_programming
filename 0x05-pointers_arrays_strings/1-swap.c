#include "main.h"
/**
 *swap_int - Swaps two integers
 *@a:First integer
 *@b:Second integer
 *
 *Return: Void
 */

void swap_int(int *a, int *b);
{
	int m, n;

	m = *a;
	n = *b;

	*a = n;
	*b = m;
}
