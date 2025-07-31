#include "lists.h"

/**
 * free_dlistint - Write a function that frees a dlistint_t list.
 *
 * @head: of the node.
 *
 * Return: free.
 *
 */


void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
