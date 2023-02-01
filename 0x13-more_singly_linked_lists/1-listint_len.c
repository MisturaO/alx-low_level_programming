#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked
 *	listint_t list.
 * @h: node pointer. pointing to the first node
 * Return: the number of elements in a linked listint_t list.
 */
size_t listint_len(const listint_t *h)
{
	int count;

	for (count = 0; h != 0; count++)
	{
		h = h->next;
	}
	return (count);
}
