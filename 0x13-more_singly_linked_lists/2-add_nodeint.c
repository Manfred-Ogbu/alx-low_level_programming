#include "lists.h"
/**
 * add_nodeint - adds a node
 * @head: is the head node
 * @n: a variable
 * Return: a new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *m;

	if (head == NULL)
		return (NULL);

	m = malloc(sizeof(listint_t));
	if (m == NULL)
		return (NULL);

	m->n = n;
	m->next = *head;
	*head = m;

	return (m);
}

