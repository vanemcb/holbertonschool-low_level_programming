#include "hash_tables.h"

/**
 * hash_table_delete - function that deletes a hash table.
 * @ht: the hash table.
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int index = 0;
	hash_node_t *aux = NULL;

	while (index < ht->size)
	{
		while (ht->array[index])
		{
			aux = ht->array[index]->next;
			free(ht->array[index]->key);
			free(ht->array[index]->value);
			free(ht->array[index]);
			ht->array[index] = aux;
		}
		index++;
	}
	free(ht->array);
	free(ht);
}
