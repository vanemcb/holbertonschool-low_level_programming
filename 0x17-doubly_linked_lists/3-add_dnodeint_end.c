#include "lists.h"

/**
 * add_dnodeint_end - function that adds a new node at the end of a doubly
 * linked kist
 * @head: double pointer to head doubly linked list
 * @n: element to add
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *aux_head = *head, *new_node = malloc(sizeof(dlistint_t));

	if (!new_node || !head)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (!*head)
	{
		*head = new_node;
		new_node->prev = NULL;
	}
	else
	{
		while (aux_head->next)
			aux_head = aux_head->next;
		aux_head->next = new_node;
		new_node->prev = aux_head;
	}
	return (new_node);
}
