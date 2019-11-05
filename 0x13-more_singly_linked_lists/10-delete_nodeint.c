#include "lists.h"

/**
 * delete_nodeint_at_index - Delete a node
 * in the given position
 *
 * @head: head of list
 * @index: position to delete the node
 *
 * Return: The new node
 *
 */


int delete_nodeint_at_index(listint_t **head, unsigned int index)
{

	listint_t *temp;
	listint_t *before = *head;
	unsigned int ln = 0, ret;

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
		ret = 1;
	}
	else
	{
		while (ln < (index - 1) && before->next)
		{
			before = before->next;
			ln++;
		}

		temp = before->next;
		before->next = before->next->next;
		free(temp);
		ret = 1;

	}
	return (ret);
}
