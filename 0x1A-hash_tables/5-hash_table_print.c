#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table.
 * @ht: he hash table.
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index = 0;

	printf("{");
	while (index < ht->size)
	{
		while (ht->array[index])
		{
			printf("'%s': '%s'", ht->array[index]->key, ht->array[index]->value);
			printf(", ");
			ht->array[index] = ht->array[index]->next;
		}
		index++;
	}
	printf("}\n");
}
