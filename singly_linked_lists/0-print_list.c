#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list.
 *
 * @h: pointer of the list to.
 *
 * Return: number of node.
 */

size_t print_list(const list_t *h)

{
	int count = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0](nil)\n");
		else
			printf("%i, %s\n", h->len, h->str);

		h = h->next;
		count++;
	}
	return (count);

}
