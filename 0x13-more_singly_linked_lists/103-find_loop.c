#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: linked list to search for
 *
 * Return: address of the node where the loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
    listint_t *temp = head;
    listint_t *flash = head;

    if (!head)
        return NULL;

    for (; temp && flash && flash->next;)
    {
        flash = flash->next->next;
        temp = temp->next;
        if (flash == temp)
        {
            temp = head;
            while (temp != flash)
            {
                temp = temp->next;
                flash = flash->next;
            }
            return flash;
        }
    }

    return NULL;
}

