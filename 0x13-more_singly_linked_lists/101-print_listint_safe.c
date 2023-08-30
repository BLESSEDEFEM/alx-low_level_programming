#include "lists.h"

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
    const listint_t *tit = head, *tat = head;
    size_t nodes = 0;

    if (!head)
        return nodes;

    do
    {
        if (!tat || !tat->next)
            return 0;

        tit = tit->next;
        tat = tat->next->next;

    } while (tit != tat);

    tat = head;
    while (tit != tat)
    {
        nodes++;
        tit = tit->next;
        tat = tat->next;
    }

    do
    {
        nodes++;
        tat = tat->next;
    } while (tit != tat);

    return nodes;
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
        while (head)
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

    return nodes;
}

