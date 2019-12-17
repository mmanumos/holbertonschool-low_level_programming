#include "lists.h"


/**
 * dlistint_len - return the number of nodes
 *
 * @h: given structure
 *
 * Return: number of elements.
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t c;

	c = 0;
	while (h != NULL)
	{
		h = h->next;
		c++;
	}

	return (c);
}
