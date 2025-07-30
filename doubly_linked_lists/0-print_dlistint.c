#include "lists.h"

/**
 * print_dlistint -  a function that prints
 * all the elements of a dlistint_t list.
 *
 * @h: header node.
 *
 * Return: Number.
 */


size_t print_dlistint(const dlistint_t *h)

{
	unsigned int n = 0;

	while (h)
	{
		printf("%i\n", h->n);

			h = h->next;
			n++;
	}

	return (n);
}
