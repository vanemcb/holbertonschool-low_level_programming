#include "lists.h"

/**
 * add_node - function that adds a new node at the beginning of a list
 * @head: pointers to nodes
 * @str: new node string
 * Return: address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	int len = 0;
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;

	new_node->str = strdup(str);
	new_node->len = len;
	new_node->next = *head;
	*head = new_node;

	return (*head);
}
