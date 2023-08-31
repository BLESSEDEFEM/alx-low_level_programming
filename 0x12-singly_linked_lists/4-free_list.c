#include "lists.h"

/**
 * free_list - frees a linked list
 * @head: pointer to the first node
 */

void free_list(list_t *head)
{
	list_t *tmpry;
	while (head && (tmpry = head->next))
	{
		free(head->str);
		free(head);
		head = tmpry;
	}
}
