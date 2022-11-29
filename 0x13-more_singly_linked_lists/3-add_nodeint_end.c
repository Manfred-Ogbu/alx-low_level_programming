#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_nodeint_end - a fxn that adds a new node
 * at the end of a list_t list.
 * @head: input
 * @n: a variable
 * Return: 0
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp_hold;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	temp_hold = *head;

	while (temp_hold->next != NULL)
		temp_hold = temp_hold->next;

	temp_hold->next = new;

	return (new);
}

