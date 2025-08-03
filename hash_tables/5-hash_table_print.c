#include "hash_tables.h"

/**
 * hash_table_print - a function that prints a hash table.
 *
 * @ht: the hash table.
 *
 * Return: print the key/value or NULL.
 *
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node;
	int first = 1; /* pour gérer les virgules */

	if (ht == NULL)
		return;

	printf("{");

	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];

		while (node != NULL)
		{
			if (first == 0)
				printf(", ");
			printf("'%s': '%s'", node->key, node->value);
			first = 0;
			node = node->next;
		}
	}

	printf("}\n");
}

