#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a listint_t linked list
 * @head: double pointer to the head of the list
 * Return: the head node’s data (n);
 */
int pop_listint(listint_t **head)
{
	listint_t *head_aux;

	if (!*head)
		return (0);

	head_aux = (*head)->next;
	free(*head);
	*head = head_aux;

	return ((*head)->n);
}
