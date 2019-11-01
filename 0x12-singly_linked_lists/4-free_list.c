#include "lists.h"

/**
 * free_list - free a list
 * with their nodes
 *
 * @head: double pointer with the initial head
 *
 * Return: The new head with the new included node
 */


void free_list(list_t *head)
{
	while (head != NULL)
	{
		free(head->str);
		free(head);
		head = head->next;
	}
}
