#include "lists.h"

/**
 * list_len - length of the list
 * @h: pointer to the first node
 * Return: number of elements in linked list
 */

size_t list_len(const list_t *h);
{
      size_t a = 0;

      if (h == NULL)
	      return (0);

      while (h != NULL)
      {
           a++;
	   h = h->next;
      }
      return (a);
}
