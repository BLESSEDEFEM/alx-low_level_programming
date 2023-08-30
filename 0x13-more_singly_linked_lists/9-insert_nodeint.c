#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node in a linked list,
 * at a given position
 * @head: pointer to the first node in the list
 * @idx: index where the new node is added
 * @n: data to insert in the new node
 *
 * Return: pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int a = 0;
	listint_t *newnode = malloc(sizeof(listint_t));
	listint_t *tmpry = *head;

	if (!newnode || !head)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;

	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}

	while (tmpry && a < idx)
	{
		if (a == idx - 1)
		{
			newnode->next = tmpry->next;
			tmpry->next = newnode;
			return (newnode);
		}
		else
		{
			tmpry = tmpry->next;
			a++;
		}
	}

	return (NULL);
}
