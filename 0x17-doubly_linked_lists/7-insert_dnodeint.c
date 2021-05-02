#include "lists.h"

/**
 * insert_dnodeint_at_index - function that inserts a new node at a
 * given position
 * @h: double pointer to head doubly linked list
 * @idx: is the index to insert the new node
 * @n: the new data to insert
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int len, i;
	dlistint_t *head_aux = *h, *new_node = malloc(sizeof(dlistint_t));

	if (!new_node)
		return (NULL);

	len = dlistint_len(*h);

	if (idx > len)
		return (NULL);

	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *h;
		*h = new_node;
		new_node->prev = NULL;
		if (head_aux)
			new_node->next->prev = new_node;
	}
	else
	{
		for (i = 0; i < (idx - 1); i++)
			head_aux = head_aux->next;

		new_node->next = head_aux->next;
		head_aux->next = new_node;
		new_node->prev = head_aux;

		if (new_node->next)
			new_node->next->prev = new_node;
	}
	return (new_node);
}

/**
 * dlistint_len - function that returns the number of elements in a linked
 * dlistint_t list
 * @h: pointer to head doubly linked list
 * Return: the number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t size = 0;

	while (h)
	{
		h = h->next;
		size++;
	}
	return (size);
}
