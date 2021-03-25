#include "lists.h"

/**
 * reverse_listint - function that reverses a linked list
 * @head: double pointer to the head of the list
 * Return: a pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev_node = *head, *next_node = (*head)->next;

	if (!*head)
		return (NULL);

	if (!((*head)->next))
		return (*head);

	(*head)->next = NULL;
	while (next_node)
	{
		prev_node = next_node;
		next_node = prev_node->next;
		prev_node->next = *head;
		*head = prev_node;
	}

	return (next_node);
}
