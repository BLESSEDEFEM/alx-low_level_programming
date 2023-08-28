#include "lists.h"

int len(const char *str);
/**
* add_node - add a node to the beginning of the list
* @head: pointer to the head of the list
* @str: string to be inserted to the first position
* Return: pointer to the first node (newly assigned)
*/
list_t *add_node(list_t **head, const char *str)
{
        list_t *nunode;

        if (head == NULL)
                return (NULL);
        nunode = malloc(sizeof(list_t));
        if (nunode == NULL)
                return (NULL);

        if (*head == NULL)
                nunode->next = NULL;
        else
        {
                nunode->next = *head;
                nunode->str = strdup(str);
                nunode->len = len(str);
                *head = nunode;
                return (*head);
        }
}
/**
* len - get the length of string
* @str: the string to get its length
* Return: length of the string
*/
int len(const char *str)
{
        int a;

        if (str == NULL)
                return (0);

        for (a = 0; str[a] != '\0'; a++)
        
        return (a);
}
