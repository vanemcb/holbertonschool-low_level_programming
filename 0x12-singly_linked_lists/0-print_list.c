#include "lists.h"

/**
 * print_list - function that prints all the elements of a list
 * @h: pointer to the first node
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	unsigned int cont = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[%d] (nil)\n", 0);
			h = h->next;
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
			h = h->next;
		}
		cont++;
	}
	return (cont);
}
