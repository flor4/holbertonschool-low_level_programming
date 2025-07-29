#include "lists.h"

/**
 * add_node - function that adds a new node
 * at the beginning of a list_t list.
 *
 * @head: head of the list.
 *
 * @str: string to go through.
 *
 * Return: the address of a new element
 * or NULL.
 *
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
		if (!new_node)
			return (NULL);

	new_node->str = strdup(str);

	if (!new_node->str)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = strlen(new_node->str);
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}

