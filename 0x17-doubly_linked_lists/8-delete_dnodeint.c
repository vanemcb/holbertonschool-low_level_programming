#include "lists.h"

/**
 * delete_dnodeint_at_index - function that deletes the node at index
 * of a doubly linked list
 * @head: double pointer to head doubly linked list
 * @index: is the index to insert the new node
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int len, i;
	dlistint_t *head_aux = *head;

	if (!*head)
		return (-1);

	len = dlistint_len(*head);

	if (index > len)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		(*head)->prev = NULL;
		free(head_aux->next);
	}
	else
	{
		for (i = 0; i < index; i++)
			head_aux = head_aux->next;

		head_aux->prev->next = head_aux->next;
		head_aux->next->prev = head_aux->prev;
		free(head_aux->next);
	}
	return (1);
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
