#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: pointer to pointer to the first node of the list
 * @str: string to put in the new node
 *
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
    /* STEP 1: Declare a pointer for the new node */
    list_t *new_node;

    /* OPTIONAL STEP: check if head or str is NULL */
    if (head == NULL || str == NULL)
    {
        return NULL;
    }

    /* STEP 2: Allocate memory for the new node */
    new_node = (list_t *)malloc(sizeof(list_t));
    if (new_node == NULL)
    {
        /* If allocation fails, we can’t continue */
        return NULL;
    }

    /* STEP 3: Duplicate the string and assign it to the node */
    new_node->str = strdup(str);
    if (new_node->str == NULL)
    {
        /* If strdup fails, we must free the node we allocated */
        free(new_node);
        return NULL;
    }

    /* STEP 4: Set the length of the string in the node */
    new_node->len = (unsigned int)len(str);

    /* STEP 5: Link the new node to the existing list */
    /* New node should point to the current first node */
    new_node->next = *head;

    /* STEP 6: Move the head pointer so it points to the new node */
    *head = new_node;

    /* STEP 7: Return the address of the new node */
    return new_node;
}
