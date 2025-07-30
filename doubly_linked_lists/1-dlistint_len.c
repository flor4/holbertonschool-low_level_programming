#include "lists.h"

/**
 *  dlistint_len - function that return the number of
 *  the linked list.
 *
 * @h: head node.
 *
 * Return: a number.
 */


size_t dlistint_len(const dlistint_t *h)

{
	int n = 0;


	while (h)
	{
		n++;
		h = h->next;

	}

	return (n);
}
