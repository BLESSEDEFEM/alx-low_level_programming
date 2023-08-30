#include "lists.h"
/**
 * pop_listint - deletes the first node of a
 * linked list and return the resulting data
 * @head: pointer to the linked list
 * Return: int
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp;

	if (head == NULL || *head == NULL)
		return (0);
	n = (*head)->n;
	temp = *head;
	*head = (*head);
	free(temp);
	return (n);
}
