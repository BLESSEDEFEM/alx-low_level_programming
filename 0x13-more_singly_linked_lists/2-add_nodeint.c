#include "lists.h"
/**
 * add_nodeint - add node to the beginning of a linked list
 *
 * @head: pointer to the head mode
 *
 * @n: the new integer to be created
 * Return: the head
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	if (head == NULL)
		return (0);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	if (*head == NULL)
		new->next = NULL;
	else
		new->next = *head;
	new->n = n;
	*head = new;

	return (*head);
}
