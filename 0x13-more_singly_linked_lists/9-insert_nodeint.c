#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts a new
 * node at a given position
 * @head: double pointer to the head of the list
 * @idx: the index of the list where the new node should be added
 * @n: value to insert in the new node
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int x;
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *pre_node = malloc(sizeof(listint_t));

	if (!new_node || !pre_node)
		return (NULL);

	if (!head)
		return (NULL);

	pre_node->next = *head;
	for (x = 0; x < idx; x++)
	{
		pre_node = pre_node->next;
		if (!pre_node)
			return (NULL);
	}

	new_node->n = n;
	new_node->next = pre_node->next;
	pre_node->next = new_node;

	return (new_node);
}
