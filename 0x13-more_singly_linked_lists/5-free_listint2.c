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
	listint_t *next;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
	}
}
