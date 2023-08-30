#include "lists.h"
/**
 * sum_listint - sums up all data of a linked list
 * @head: pointer to the list
 * Return: sun
 */
int sum_listint(listint_t *head)
{
    int sum = 0;

    if (head == NULL)
	    return (0);
    while (head != NULL)
    {
           sum = sum + head->n;
	   head = head->next;
    }
    return (sum);
}
