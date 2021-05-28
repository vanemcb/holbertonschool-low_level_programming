#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table
 * @size: array size
 * Return: a pointer to the newly created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table = NULL;
	hash_node_t **head_array = NULL;
	unsigned long int i;

	hash_table = malloc(sizeof(hash_table_t));
	if (!hash_table)
		return (NULL);

	head_array = malloc(sizeof(hash_node_t *) * size);
	if (!head_array)
		return (NULL);

	for (i = 0; i < size; i++)
		head_array[i] = NULL;

	hash_table->size = size;
	hash_table->array = head_array;

	return (hash_table);
}
