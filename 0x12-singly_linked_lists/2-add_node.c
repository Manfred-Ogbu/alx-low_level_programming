#include "lists.h"
#include <string.h>

/**
 * add_node - appends a node to the head
 * @head: address to a node list_t
 * @str: a string to add to the lists content
 *
 * Return: pointer to a list_t.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *m;
	size_t len = 0;

	m = malloc(sizeof(list_t));
	if (!m)
		return (NULL);

	while (str[len])
		len++;
	m->len = len;

	m->str = strdup(str);
	if (!(*head))
		m->next = NULL;
	else
		m->next = *head;
	*head = m;

	return (*head);
}

