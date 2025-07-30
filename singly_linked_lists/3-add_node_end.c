#include "lists.h"

/**
 * add_node_end - function that adds a new node
 * at the beginning of a list_t list.
 *
 * @head: firt node of the string.
 * @str: string of.
 *
 * Return: the address of a new element.
 *
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp = *head;
	list_t *new_node;
	unsigned int len = 0;

	new_node = malloc(sizeof(list_t));

	if (!new_node)
		return (NULL);

	new_node->str = strdup(str);

	while (str[len] != '\0')
	{
	len++;
	}
	new_node->len = len;

	new_node->next = NULL;

	if (!new_node->str)
	{
		free(new_node);
		return (NULL);
	}

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (temp->next != NULL)
		temp = temp->next;
	temp->next = new_node;

	return (new_node);

}
