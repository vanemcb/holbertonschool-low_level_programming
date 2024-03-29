#include "lists.h"

/**
 * add_dnodeint - function that adds a new node at the beginning of a doubly
 * linked kist
 * @head: double pointer to head doubly linked list
 * Return: the address of the new element, or NULL if it failed
 * @n: element to add.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (!new_node || head == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	new_node->prev = NULL;
	if (*head)
		(*head)->prev = new_node;
	*head = new_node;
	return (*head);
}
