#include "lists.h"

/**
 * print_list - print structure
 * with their nodes
 *
 * @h: pointer to initial structure
 *
 * Return: counter of nodes
 */


size_t print_list(const list_t *h)
{
	unsigned int i;
	const list_t *temp = NULL;

	temp = h;
	i = 0;

	while (temp != NULL)
	{
		if (temp->str == NULL)
		{
			printf("[%d] [%s]\n", 0, "(nil)");
		}
		else
		{
			printf("[%d] [%s]\n", temp->len, temp->str);
		}

		temp = temp->next;
		i++;
	}
	return (i);

}
