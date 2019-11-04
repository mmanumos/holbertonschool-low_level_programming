#include "lists.h"

/**
 * add_nodeint - add new node
 * to the beggining of the list
 *
 * @head: head of list
 * @n: element to new node
 *
 * Return: The new list
 *
 */



listint_t *add_nodeint(listint_t **head, const int n)
{

	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (!(new_node))
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (*head);
}
