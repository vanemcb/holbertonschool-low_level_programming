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
	listint_t *new_node = malloc(sizeof(listint_t)), *prev_node = *head;

	if (!new_node)
		return (NULL);

	if (!head)
	{
		*head = new_node;
		new_node->n = n;
		new_node->next = NULL;
	}
	else
	{
		prev_node = *head;
		for (x = 0; x < (idx - 1); x++)
			prev_node = prev_node->next;

		new_node->n = n;
		new_node->next = prev_node->next;
		prev_node->next = new_node;
	}

	return (new_node);
}
