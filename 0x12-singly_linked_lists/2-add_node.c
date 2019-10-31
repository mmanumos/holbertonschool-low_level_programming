#include "lists.h"

/**
 * add_node - add
 * new node to the beggining.
 *
 * @head: pointer with the initial head
 * @str : string to append to new node
 *
 * Return: The new head with the new included node
 */


list_t *add_node(list_t **head, const char *str)
{
	unsigned int i = 3;
	list_t *new_node;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
		;

	new_node->str = strdup(str);
	new_node->len = i;
	new_node->next = *head;
	*head = new_node;

	return (*head);

}
