#include "lists.h"

/**
 * listint_len - get the number
 * of nodes
 *
 * @h: head of list
 *
 * Return: Number of nodes
 *
 */



size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
