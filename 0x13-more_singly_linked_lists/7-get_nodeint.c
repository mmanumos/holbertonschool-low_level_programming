#include "lists.h"

/**
 * get_nodeint_at_index - get the
 * node with position index
 *
 * @head: head of list
 * @index: position to match
 *
 * Return: node with position index
 *
 */



listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int ln = 0;

	if (!head)
		return (NULL);

	while (ln < index && head->next)
	{
		head = head->next;
		ln++;
	}

	if (ln != index)
		return (NULL);

	return (head);
}
