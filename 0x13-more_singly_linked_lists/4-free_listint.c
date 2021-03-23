#include "lists.h"

/**
 * free_listint - function that frees a list
 * @head: pointer to the head of the list
 */
void free_listint(listint_t *head)
{
	listint_t *head_aux;

	while (head)
	{
		head_aux = head->next;
		free(head);
		head = head_aux;
	}

}
