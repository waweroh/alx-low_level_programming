#include "lists.h"

/**
 * print_dlistint - prints all the elements in a doubly linked list.
 * @h: Pointer to the head node of the doubly linked list.
 *
 * Return: Number of nodes.
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes++;
	}

	return (nodes);
}
