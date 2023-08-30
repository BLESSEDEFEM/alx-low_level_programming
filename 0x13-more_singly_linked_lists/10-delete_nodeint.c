#include "lists.h"
/**
 * delete_nodeint_at_index - deletes node at a certain index
 * @head: pointer to the head of a list
 * @index: index of the node to be freed
 * Return: 1, if successful and -1 if not
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int a = 0;
	listint_t *tempry = *head;
	listint_t *node;

	if (head == NULL || *head == NULL)
		return (-1);

	while (a < index - 1 && tempry != NULL && index != 0)
	{
		tempry = tempry->next;
		a++;
	}

	if (tempry == NULL)
		return (-1);

	if (index == 0)
	{
		node = tempry->next;
		free(tempry);
		*head = node;
	}
	else
	{
		if (tempry->next == NULL)
			node = tempry->next;
		else
			node = tempry->next->next;
		free(tempry->next);
		tempry->next = node;
	}

	return (1);
}
