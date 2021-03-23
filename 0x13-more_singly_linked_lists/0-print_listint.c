#include "lists.h"

/**
 * print_listint - function that prints all the elements of a list
 * @h: pointer to the head of the list
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	unsigned int size = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		size++;
	}
	return (size);
}
