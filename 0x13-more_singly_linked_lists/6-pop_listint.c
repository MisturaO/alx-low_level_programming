#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list,
 *	and returns the head node’s data (n).
 * @head: pointer to node
 *
 *Return: returns the head node’s data (n).
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (*head == NULL)
	{
		return (0);
	}

	data = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (data);
}

