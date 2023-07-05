#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: the list
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t i;

	i = 0;

	if (h == NULL)
		return (-1);

	printf("%d\n", h->n);
	i++;

	if (h->next != NULL)
	{
		i++;
		h = h->next;
		print_listint(h);
	}
	return (i);
}
