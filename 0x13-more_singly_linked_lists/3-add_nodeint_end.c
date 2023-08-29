#include "lists.h"

/**
 * add_nodeint_end - add a new node at the end
 * of a linked list
 * @head: head of a list.
 * @n: n element.
 *
 * Return: address of the new element. NUll if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *tlist;

	(void)tlist;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	tlist = *head;
	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		while (tlist->next != NULL)
		{
			tlist = tlist->next;
		}
		tlist->next = new;
	}

	return (*head);
}
