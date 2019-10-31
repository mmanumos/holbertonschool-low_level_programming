#include "lists.h"

/**
 * list_len - count
 * the elements of structure
 *
 * @h: pointer to initial structure
 *
 * Return: counter of elements
 */


size_t list_len(const list_t *h)
{
	int i;
	const list_t *temp = NULL;

	temp = h;
	i = 0;

	while (temp != NULL)
	{
		temp = temp->next;
		i++;
	}
	return (i);

}
