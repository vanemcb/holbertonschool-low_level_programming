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
	unsigned int i;
	dlistint_t *head_aux = head;

	if (!head)
		return (NULL);

	while (head_aux)
	{
		head_aux = head_aux->next;
		i++;
	}

	if (index > i)
		return (NULL);

	for (i = 0; i < index; i++)
		head = head->next;
	return (head);
}
