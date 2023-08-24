#include "lists.h"

/**
 * print_list - print all the elements of a list
 *
 * @h: head
 *
 * Return: number of nodes
 *
 */
size_t print_list(const list_t *h)
{
	size_t num;

	num = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		num++;
		h = h->next;
	}
	return (num);
}
