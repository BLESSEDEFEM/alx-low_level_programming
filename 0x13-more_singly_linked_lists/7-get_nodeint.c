#include "lists.h"

/**
 * get_nodeint_at_index - retrieve a node at an index
 * @head: pointer to the first element of a linked list
 * @index: desired position to retrieve
 * Return: pointer to the retrieved node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int j = 0;

	while (j < index)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
		j++;
	}

	return (head);
}
