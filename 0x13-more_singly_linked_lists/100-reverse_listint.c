#include "lists.h"

/**
 * reverse_listint - print elements
 * in reverse.
 *
 * @head: head of list
 *
 * Return: head in reverse.
 *
 */



listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp;
	listint_t *rev = NULL;

	if (!head)
		return (NULL);

	temp = *head;

	while (temp)
	{
		temp = temp->next;
		(*head)->next = rev;
		rev = *head;
		*head = temp;

	}

	*head = rev;
	return (*head);
}
