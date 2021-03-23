#include "lists.h"

/**
 * sum_listint - function that returns the sum of all
 * the data (n) of a linked list
 * @head: pointer to the head of the list
 * Return: sum of all the data (n) of a linked list
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);

	while (head)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
