#include "lists.h"

/**
 * add_node_end - adds a new node at the end
 * @head: head
 * @str: string
 * Return: the address of the new element, else
 * NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *string;
	list_t *n;
	list_t *x = *head;

	n = malloc(sizeof(list_t));
	if (!n)
		return (NULL);
	string = strdup(str);
	n->str = string;
	if (!(n->str))
	{
		free(n);
		return (NULL);
	}
	n->len = strlen(string);
	if (x == NULL)
	{
		*head = n;
	}
	else
	{
		while (x->next)
			x = x->next;
		x->next = n;
	}
	n->next = NULL;
	return (n);
}
