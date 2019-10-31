#include "lists.h"

/**
 * print_list -
 *
 *@h:
 *
 * Return:
 */


size_t print_list(const list_t *h)
{
	int i;
	const list_t *temp = NULL;
	temp = h;

	i = 0;
	while (temp != NULL)
	{
		if (temp->str == NULL)
			printf("[0] (nil)\n");

		else
			printf("[%d] [%s]\n", temp->len, temp->str);

		temp = temp->next;
		i++;
	}
	return (i);

}
