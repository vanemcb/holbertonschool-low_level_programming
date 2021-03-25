#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes the node at index
 * of a linked list
 * @head: double pointer to the head of the list
 * @index: the index of the list where the new node should be deleted
  * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int x;
	listint_t *prev_node = *head, *next_node = *head;

	if (!*head)
		return (-1);

	while (prev_node)
	{
		prev_node = prev_node->next;
		x++;
	}
	if (x < index)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(next_node);
	}
	else
	{
		for (x = 0; x < index; x++)
		{
			prev_node = next_node;
			next_node = prev_node->next;
		}
		prev_node->next = next_node->next;
		free(next_node);
	}
	return (1);
}
