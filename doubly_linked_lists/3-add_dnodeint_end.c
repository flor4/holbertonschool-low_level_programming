#include "lists.h"

/**
 * add_dnodeint_end - function that add a node at the end.
 *
 * @head: head of the node.
 * @n: number of.
 *
 * Return: address or NULL.
 *
 */


dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)

{
	dlistint_t *new_node, *temp;


	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	temp = *head;

	while (temp->next)

		temp = temp->next;
	temp->next = new_node;
	new_node->prev = temp;


	return (new_node);

}

