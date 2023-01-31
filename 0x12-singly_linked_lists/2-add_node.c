#include <stdio.h>
#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * add_node - adds a new node at the end of a list
 * @head: Pointer to the head function
 * @str: string node value
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;
	unsigned int str_len;

	temp = malloc(sizeof(list_t));

	if (temp == NULL)
		return (NULL);

	temp->str = strdup(str);

	for (str_len = 0; str[str_len]; str_len++)
		;

	temp->len = str_len;
	temp->next = *head;
	*head = temp;

	return (*head);
}
