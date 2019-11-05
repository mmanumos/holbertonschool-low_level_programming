#include "lists.h"

/**
 * sum_listint - get the
 * sum of the elements n from list
 *
 * @head: head of list
 *
 * Return: Sum from elements n
 *
 */



int sum_listint(listint_t *head)
{
	unsigned int ln = 0;

	if (!head)
		return (ln);

	while (head->next)
	{
		head = head->next;
		ln = ln + head->n;
	}

	return (ln);
}
