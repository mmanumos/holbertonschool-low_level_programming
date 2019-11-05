#include "lists.h"

/**
 * insert_nodeint_at_index - add new node
 * in the given position
 *
 * @head: head of list
 * @n: element to new node
 * @idx: position to new node
 *
 * Return: The new node
 *
 */



listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{

	listint_t *new_node;
	listint_t *before;
	unsigned int ln = 0;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;

	if (!*head)
	{
		*head = new_node;
		new_node->next = NULL;
	}
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
	}
	else
	{
		before = *head;
		while (ln < (idx - 1))
		{
			before = before->next;
			ln++;
			if (before == NULL)
			{
				free(new_node);
				return (NULL);
			}
		}
		new_node->next = before->next;
		before->next = new_node;
		return (new_node);

	}
	return (new_node);
}
