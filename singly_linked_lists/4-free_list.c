#include "lists.h"

/**
 * free_list - function that free your mind or list.
 *
 * @head: node of the list.
 *
 * Return: freedom and inner peace.
 */

void free_list(list_t *head)
{

	list_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
}
