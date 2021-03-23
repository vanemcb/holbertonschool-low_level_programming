#include "lists.h"

/**
 * listint_len - function that returns the number of elements in a linked list
 * @h: pointer to the head of the list
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	unsigned int size;

	while (h)
	{
		h = h->next;
		size++;
	}
	return (size);
}
