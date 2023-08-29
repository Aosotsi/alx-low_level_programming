#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list.
 * @head: head of a list.
 *
 * Return: the address of the node where the loop starts.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *pointerlist;
	listint_t *prev;

	pointerlist = head;
	prev = head;
	while (head && pointerlist && pointerlist->next)
	{
		head = head->next;
		pointerlist = pointerlist->next->next;

		if (head == pointerlist)
		{
			head = prev;
			prev =  pointerlist;
			while (1)
			{
				pointerlist = prev;
				while (pointerlist->next != head && pointerlist->next != prev)
				{
					pointerlist = pointerlist->next;
				}
				if (pointerlist->next == head)
					break;

				head = head->next;
			}
			return (pointerlist->next);
		}
	}

	return (NULL);
}
