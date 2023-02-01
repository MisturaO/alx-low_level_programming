#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list.
 * @head: pointer to the first node in the list.
 * @n: input argument from main function.
 *
 * Return: the address of the new element, or NULL if it failed
 */


listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);

	temp->next = *head;
	temp->n = n;
	*head = temp;

	return (*head);
}
