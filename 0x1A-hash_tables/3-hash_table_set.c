#include "hash_tables.h"

/**
 * hash_table_set - function that adds an element to the hash table.
 * @ht: the hash table you want to add or update the key/value to.
 * @key: the key.
 * @value: the value associated with the key.
 * Return: if it succeeded, 0 otherwise.
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	char *key_dup = NULL, *value_dup = NULL;
	hash_node_t *new_node = NULL;

	if (strcmp(key, "") == 0 || !key || !ht)
		return (0);

	value_dup = strdup(value);
	key_dup = strdup(key);
	if (!value_dup || !key_dup)
		return (0);

	index = key_index((unsigned const char *)key, ht->size);

	while (ht->array[index])
	{
		if (strcmp(ht->array[index]->key, key) == 0)
		{
			ht->array[index]->value = value_dup;
			return (1);
		}
		ht->array[index] = ht->array[index]->next;
	}

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);

	new_node->key = key_dup;
	new_node->value = value_dup;
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}
