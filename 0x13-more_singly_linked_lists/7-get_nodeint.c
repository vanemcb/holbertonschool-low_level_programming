#include "lists.h"

/**
 * get_nodeint_at_index -  function that returns the nth node of a linked list
 * @head: pointer to the head of the list
 * @index: is the index of the node, starting at 0
 * Return: the nth node of a liinked list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x = 0;
	listint_t *i_node = head;

	if (!head)
		return (NULL);

	while (i_node)
	{
		i_node = i_node->next;
		x++;
	}

	if (x < index)
		return (NULL);

	i_node = head;
	for (x = 0; x < index; x++)
		i_node = i_node->next;

	return (i_node);
}
