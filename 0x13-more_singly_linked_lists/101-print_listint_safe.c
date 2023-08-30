#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - Counts the number of unique nodes
 * in a looped listint_t linked list.
 * @head: A pointer to the head of the listint_t to check.
 *
 * Return: If the list is not looped - 0.
 * Otherwise - the number of unique nodes in the list.
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *slwptr, *fstptr;
	size_t nodes = 1;

	if (!head || !head->next)
		return (0);

	slwptr = head->next;
	fstptr = (head->next)->next;

	while (fstptr)
	{
		if (slwptr == fstptr)
		{
			slwptr = head;
			while (slwptr != fstptr)
			{
				nodes++;
				slwptr = slwptr->next;
				fstptr = fstptr->next;
			}

			slwptr = slwptr->next;
			while (slwptr != fstptr)
			{
				nodes++;
				slwptr = slwptr->next;
			}

			return (nodes);
		}

		slwptr = slwptr->next;
		fstptr = (fstptr->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - Prints a listint_t list safely.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes = looped_listint_len(head);
	size_t index = 0;

	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (index = 0; index < nodes; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nodes);
}
