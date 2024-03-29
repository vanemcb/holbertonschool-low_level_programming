#include "hash_tables.h"

/**
 * hash_table_get - function that retrieves a value associated with a key.
 * @ht: the hash table you want to look into
 * @key: the key you are looking for
 * Return: the value associated with the element,
 * or NULL if key couldn’t be found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *head = NULL;

	if (!ht)
		return (NULL);

	index = key_index((unsigned const char *)key, ht->size);

	head = ht->array[index];

	while (head)
	{
		if (strcmp(key, head->key) == 0)
			return (head->value);
		head = head->next;
	}

	return (NULL);
}
