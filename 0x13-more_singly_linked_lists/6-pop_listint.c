#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a listint_t linked list
 * @head: double pointer to the head of the list
 * Return: the head node’s data (n);
 */
int pop_listint(listint_t **head)
{
	listint_t *aux_node = *head;

	if (!*head)
		return (0);

	if (!aux_node)
	{
		*head = aux_node->next;
		free(aux_node);
	}
	return (aux_node->n);
}
