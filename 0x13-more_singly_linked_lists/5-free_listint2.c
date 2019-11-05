#include "lists.h"

/**
 * free_listint2 - free a list
 * and their nodes
 *
 * @head: head of list
 *
 * Return: None
 *
 */



void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
	{
		return;
	}

	temp = *head;

	while (temp->next != NULL)
	{
		free(temp);
		temp = temp->next;
	}
	free(head);
	head = NULL;
}
