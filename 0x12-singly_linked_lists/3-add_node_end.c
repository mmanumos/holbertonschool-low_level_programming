#include "lists.h"

/**
 * add_node_end - add
 * new node to the end.
 *
 * @head: double pointer with the initial head
 * @str : string to append to new node
 *
 * Return: The new head with the new included node
 */


list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int i = 3;
	list_t *new_node;
	list_t *before;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
		;
	new_node->str = strdup(str);
	new_node->len = i;

	if (*head == NULL)
	{
		*head = new_node;
		new_node->next = NULL;
		return (*head);
	}

	before = *head;
	while (before->next != NULL)
	{
		before = before->next;
	}
	before->next = new_node;
	new_node->next = NULL;
	return (*head);
}
