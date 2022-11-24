#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_list - print the contents of a list.
 * @h: pointer to list.
 *
 * Return: number of elements in a list
 */

size_t print_list(const list_t *h)
{
	size_t x_nodes;

	if (!h)
		return (0);
	x_nodes = 0;
	do {
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);

		h = h->next;
		x_nodes++;
	}  while (h);

	return (x_nodes);
}

