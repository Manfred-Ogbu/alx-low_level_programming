#include "lists.h"
/**
 * pop_listint - Delete the head
 * @head: head
 * Return: 0
 */
int pop_listint(listint_t **head)
{
	int data;

	listint_t *new;

	if (*head == NULL)
		return (0);

	data = (*head)->n;

	new = *head;
	*head = (*head)->next;

	free(new);
	return (data);
}

