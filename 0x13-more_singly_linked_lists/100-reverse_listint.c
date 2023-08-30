#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: pointer to the first node in the list
 *
 * Return: pointer to the first node in the new list
 */
listint_t *reverse_listint(listint_t **head)
{
    listint_t *old = NULL;
    listint_t *new = *head;
    listint_t *next = NULL;

    while (new)
    {
        next = new->next;
        new->next = old;
        old = new;
        if (next == NULL)
            break;
        new = next;
    }

    *head = old;

    return (*head);
}
