#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns the nth node of a doubly
 * linked list
 * @head: pointer to the head of the list
 * @index: is the index of the node
 * Return: pointer to the nth node or NULL if it doesn't exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i, len;

	if (!head)
		return (NULL);

	len = dlistint_len(head);

	if (index > len)
		return (NULL);

	for (i = 0; i < index; i++)
		head = head->next;
	return (head);
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
