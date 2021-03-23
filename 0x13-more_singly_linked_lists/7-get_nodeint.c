#include "lists.h"

/**
 * get_nodeint_at_index -  function that returns the nth node of a linked list
 * @head: pointer to the head of the list
 * @index: is the index of the node, starting at 0
 * Return: the nth node of a liinked list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x;
	listint_t *head_aux = head;

	if (!head)
		return (NULL);

	for (x = 0; x < index; x++)
		head_aux = head_aux->next;

	return (head_aux);
}
