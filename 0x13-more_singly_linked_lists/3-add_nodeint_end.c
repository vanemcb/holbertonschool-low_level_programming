#include "lists.h"

/**
 * add_nodeint_end - function that adds a new node at the end of a list
 * @head: double pointer to the head of the list
 * @n: element of the structure
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *i_node = *head, *new_node = malloc(sizeof(listint_t));

	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (!*head)
		*head = new_node;
	else
	{
		while (i_node->next)
			i_node = i_node->next;
		i_node->next = new_node;
	}
	return (*head);
}
