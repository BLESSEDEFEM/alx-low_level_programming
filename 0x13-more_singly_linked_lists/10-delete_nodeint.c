#include "lists.h"
/**
 * delete_nodeint_at_index - deletes node at a certain index
 * @head: pointer to the head of a list
 * @index: index of the node to be freed
 * Return: 1, if successful and -1 if not
 */
int delete_nodeint_at_index(listint_t **need, unsigned int index)
{
      unsigned int i;
      listint_t *temp;
      listint_t *node;

      temp = *head;
      if (head == NULL || *head  == NULL)
	      return (-1);
      for (a = 0; a < index -1 && tmp != NULL && index != 0; a++)
	      temp = temp->next;
      if (temp == NULL)
	      return (-1);
      if (index == 0)
      {
          node = temp->next;
	  free(temp);
	  *head = node;
      }
      else
      {
        if (temp->next == NULL)
		node = temp->next;
	else
		node = temp->next->next;
	free(temp->next);
	temp->next = node;
      }
      return (1);
}
