#include "main.h"
/**
 * factorial - Return the factorial of a number.
 * @n: Integer of factorial.
 *
 *Return: If n > 0 - factorial of n.
 *        If n < 0 -1 showing error
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n < 2)
		return (n);
	else
		return (n * factorial(n - 1));

}
