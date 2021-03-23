#include "lists.h"

/**
 * free_listint2 - function that frees a list
 * @head: pointer to the head of the list
 */
void free_listint2(listint_t **head)
{
	listint_t *head_aux;

	if (!head)
		return;

	while (*head)
	{
		head_aux = (*head)->next;
		free(*head);
		*head = head_aux;
	}
}
