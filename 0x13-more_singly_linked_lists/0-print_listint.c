#include "lists.h"

/**
 * print_listint - print integer in list
 * @h: struct listint_t
 * Return:value of size_t
 */

size_t print_listint(const listint_t *h)
{
	size_t list = 0;

	while (x != NULL)
	{
		printf("%d\n", x->n);
		list++;
		x = x->next;
	}

	return (list);
}
