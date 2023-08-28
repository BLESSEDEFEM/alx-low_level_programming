#include "lists.h"
#include <stdlib.h>
#include <string.h> 

typedef struct list_s {
    char *str;
    int len;
    struct list_s *next;
} list_t; 

list_t *add_node_end(list_t **head, const char *str) {
    list_t *new_node = create_node(str);
    if (!new_node)
        return NULL;
    
    if (!*head)
        return *head = new_node;
    
    list_t *tmp = *head;
    while (tmp->next)
        tmp = tmp->next;
    
    tmp->next = new_node;
    return *head;
} 

list_t *create_node(const char *str) {
    list_t *new_node = malloc(sizeof(list_t));
    if (new_node == NULL)
        return NULL;
    
    new_node->str = strdup(str);
    new_node->len = strlen(str);
    new_node->next = NULL;
    return new_node;
} 

int len(const char *str) {
    if (!str)
        return 0;
    
    int a; 

    for (a = 0; str[a] != '\0'; a++)
    return a;
}
