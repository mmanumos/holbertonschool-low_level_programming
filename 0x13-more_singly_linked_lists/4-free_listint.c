#include "lists.h"

/**
 * free_listint - free a list
 * and their nodes
 *
 * @head: head of list
 *
 * Return: None
 *
 */



void free_listint(listint_t *head)
{
	if(head == NULL)
	{
		return;
	}

	while (head)
	{
		free(head);
		head = head->next;
	}
}
