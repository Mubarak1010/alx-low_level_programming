#include "lists.h"
#include <stdio.h>

/**
 * list_len - number of elements in a linked list_t list.
 * @h: parameter passed
 * Return: number of elements in a linked list_t list.
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (-1);

	count++;

	if (h->next != NULL)
	{
		count++;
		h = h->next;
		list_len(h);
	}
	return (count);
}
