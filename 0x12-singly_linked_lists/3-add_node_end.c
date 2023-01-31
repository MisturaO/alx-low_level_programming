#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list
 * @head: double pointer to the list list_t list
 * @str: new string to add at the end of the node
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *temp;
	unsigned int str_len;

	temp = malloc(sizeof(list_t));

	if (temp == NULL)
		return (NULL);
	temp->str = strdup(str);

	for (str_len = 0; str[str_len]; str_len++)
		;
	temp->len = str_len;
	temp->next = NULL;
	new = *head;

	if (new == NULL)
	{
		*head = temp;
	}
	else
	{
		while (new->next != NULL)
		{
			new = new->next;
		}
		new->next = temp;
	}
	return (*head);
}
