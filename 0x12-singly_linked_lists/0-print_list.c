#include "lists.h"

/**
 * print_list - Prints all the elements of a linked list
 * @h: Pointer to linked list head
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	int a = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[%u] %s\n", h->len, "[0] (nil)");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		h = h->next;
		a++;
	}
	return (a);
}
