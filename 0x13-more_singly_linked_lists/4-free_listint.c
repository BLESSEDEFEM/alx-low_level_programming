#include "lists.h"
/**
 * free_listint - a function that frees a linked list
 * @head: pointer to the first node
 * Return: no return
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while ((tmp = head) != NULL)
	{
		head = head->next;
		free(tmp);
	}
}
