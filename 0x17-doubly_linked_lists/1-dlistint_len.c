#include "lists.h"

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
