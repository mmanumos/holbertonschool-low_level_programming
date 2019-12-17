#include "lists.h"


/**
 * print_dlistint - print the elements for every node
 *
 * @h: given structure
 *
 * Return: number of elements.
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t c;

	c = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		c++;
	}

	return (c);
}
