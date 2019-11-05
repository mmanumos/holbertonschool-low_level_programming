#include "lists.h"

/**
 * pop_listint - remove
 * the last node
 *
 * @head: head of list
 *
 * Return: element n of last node
 *
 */



int pop_listint(listint_t **head)
{
	listint_t *temp;
	int ln = 0;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}

	temp = *head;
	ln = temp->n;
	*head = temp->next;
	free(temp);
	return (ln);
}
