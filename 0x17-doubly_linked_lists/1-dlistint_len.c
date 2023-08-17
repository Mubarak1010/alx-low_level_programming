#include "lists.h"
#include <stdio.h>

/**
 * dlistint_len - function that returns the number of elements
 * in a linked dlistint_t list.
 *
 * @h: pointer to the list
 *
 * Return: the number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t nod = 0;

	if (h == NULL)
		return (nod);

	while (h != NULL)
	{
		nod++;
		h = h->next;
	}
	return (nod);
}
