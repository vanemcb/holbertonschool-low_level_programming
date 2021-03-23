#include "lists.h"

/**
 * free_listint2 - function that frees a list
 * @head: pointer to the head of the list
 */
void free_listint2(listint_t **head)
{
	listint_t *head_aux = *head;

	while (head_aux->next)
	{
		free(head_aux);
		head_aux = head_aux->next;
	}
	free(head_aux);
	*head = NULL;
}
