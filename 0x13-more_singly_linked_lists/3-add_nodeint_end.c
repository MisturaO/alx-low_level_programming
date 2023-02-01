#include "lists.h"

/**
 *add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: pointer to the first node in the list
 * @n: the new node to be added
 *
 * Return: the address of the new element, or NULL if it failed
 */


listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode, *temp;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->next = NULL;
	newnode->n = n;
	temp = *head;

	if (*head == NULL)
	{
		*head = newnode;
	}
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = newnode;
	}
	return (*head);
}

