#include "lists.h"

/**
 * delete_nodeint_at_index - Delete a node
 * in the given position
 *
 * @head: head of list
 * @index: position to delete the node
 *
 * Return:The new node
 *
 */


int delete_nodeint_at_index(listint_t **head, unsigned int index)
{

	listint_t *temp;
	listint_t *before = *head;
	unsigned int ln = 0;

	if (!*head || !head)
		return (-1);

	if (!*head && !index)
	{
		head = NULL;
		return (1);
	}

	if (!index)
	{
		*head = before->next;
		free(before);
		return (1);
	}

	while (ln < (index - 1) && before->next)
	{
		before = before->next;
		ln++;
	}

	if (ln != (index - 1))
		return (-1);

	temp = before->next;
	before->next = before->next->next;
	free(temp);
	return (1);
}
