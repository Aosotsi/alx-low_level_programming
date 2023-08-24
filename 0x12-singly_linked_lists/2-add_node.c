#include "lists.h"

/**
 * add_node - adds a new node
 * @head: head
 * @str: string
 * Return: the address of the new element, else
 * NULL if it failed
 *
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *n;
	char *string;

	n = malloc(sizeof(list_t));
	if (n == NULL)
		return (NULL);
	string = strdup(str);
	n->str = string;
	if (!(n->str))
	{
		free(n);
		return (NULL);
	}
	n->len = strlen(n->str);
	n->next = *head;
	*head = n;

	return (n);
}
