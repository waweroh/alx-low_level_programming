#include "main.h"
/**
 *main - entry point
 *
 *Return - Always 0.
 */
int main(void)
{
	int n = 402;
	int *ptr = &n;
	*ptr = 98;
	_putchar("%d", *ptr);
}
