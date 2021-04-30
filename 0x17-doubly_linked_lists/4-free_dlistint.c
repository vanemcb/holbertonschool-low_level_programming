#include "lists.h"

/**
 * free_dlistint - function that frees a list
 * @head: pointer to the head of the list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *head_aux;

	while (head)
	{
		head_aux = head->next;
		free(head);
		head = head_aux;
	}
}
