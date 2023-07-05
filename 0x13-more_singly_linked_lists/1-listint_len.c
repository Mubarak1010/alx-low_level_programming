#include "lists.h"

/**
 * listint_len - number of elements in a linked listint_t list.
 * @h: the list
 * Return: the number of elements in a linked listint_t list.
 */

size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	if (h == NULL)
		return (0);

	len++;

	if (h->next != NULL)
	{
		len++;
		h = h->next;
		listint_len(h);
	}
	return (len);
}
