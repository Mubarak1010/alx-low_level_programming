#include "lists.h"
#include <stddef.h>
#include <stdio.h>

/**
 * print_list - function that prints all the elements of a list_t list.
 * @h: parameter passed
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (-1);

	if (h->str == NULL)
	{
		printf("[0] (nil)\n");
		count++;
	}
	else
	{
		printf("[%d] %s\n", h->len, h->str);
		count++;
	}
	if (h->next != NULL)
	{
		count++;
		h = h->next;
		print_list(h);
	}
	return (count);
}
