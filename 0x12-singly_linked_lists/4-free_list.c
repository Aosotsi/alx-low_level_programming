#include "lists.h"

/**
 * free_list - fress a list
 * @head: head
 */
void free_list(list_t *head)
{
	list_t *x = head;
	list_t *n;

	while (x)
	{
		n = x->n;
		free(x->str);
		free(x);
		x = n;
	}
	head = NULL;
}
