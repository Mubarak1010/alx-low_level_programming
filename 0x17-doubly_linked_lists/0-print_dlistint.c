#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - function that prints all the elements of a dlistint_t list.
 *
 * @h: pointer to the list
 *
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t nod = 0;

	while (h->next != NULL)
	{
		printf("%d\n", h->n);
		nod++;
		h = h->next;
	}

	printf("%d\n", h->n);
	nod++;
	return (nod);
}
