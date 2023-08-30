#include "lists.h"
/**
 * get_nodeint_at_index - retrieve a node at an index
 * @head: pointer to the first element of a linked list
 * @index: desired position to retrieve
 * Return: pointer to the retrieved node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
     unsigned int j;

     for (j = 0; j < index; j++)
     {
          if (head == NULL)
		  return (NULL);
	  head = head->next;
     }
     return (head);
}
