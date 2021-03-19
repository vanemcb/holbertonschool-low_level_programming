#include "lists.h"

/**
 * print_list - function that prints all the elements of a list
 * @h: pointer to the first node
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	unsigned int cont = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[%d]", 0);
			printf("%s\n", "(nil)");
			h = h->next;
		}
		else
		{
			printf("[%d] ", h->len);
			printf("%s\n", h->str);
			h = h->next;
		}
		cont++;
	}
	return (cont);
}
