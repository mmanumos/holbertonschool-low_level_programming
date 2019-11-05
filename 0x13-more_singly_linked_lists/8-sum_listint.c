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


	while (head != NULL)
	{
		ln = ln + head->n;
		head = head->next;
	}

	return (ln);
}
