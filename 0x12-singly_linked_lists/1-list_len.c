#include "lists.h"

/**
 * list_len - function that returns the number of elements in a linked list
 * @h: pointer to the first node
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
	unsigned int cont = 0;

	while (h != NULL)
	{
		h = h->next;
		cont++;
	}
	return (cont);
}
