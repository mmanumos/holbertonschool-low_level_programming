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
	listint_t *next;

	while (head != NULL)
	{
		next = head->next;
		free(head);
		head = next;
	}
}
