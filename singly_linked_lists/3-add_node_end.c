#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: pointer to pointer to the first node of the list
 * @str: string to put in the new node
 *
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
    list_t *new_node;
    list_t *temp;
    unsigned int len = 0;

    /* 1. Compute the length of str */
    while ( str[len] )
    /* condition using str and len */
    {
        len++;
        /* increase length */
    }

    /* 2. Allocate memory for the new node */
    new_node = malloc( sizeof( list_t ) );
    if (new_node == NULL)
        return (NULL);

    /* 3. Duplicate the string */
    new_node->str = strdup(str);
    /* use strdup */
    if (new_node->str == NULL)
    {
        free(new_node);
        /* free the node */
        return (NULL);
    }

    /* 4. Initialize the fields of the new node */
    new_node->len = len;
    /* set length value */
    new_node->next = NULL;
    /* should be NULL */

    /* 5. If the list is empty, new node becomes the head */
    if ( *head == NULL )
    /* check if *head is empty */
    {
        *head = new_node;
        /* make head point to new_node */
        return (new_node);
    }

    /* 6. Otherwise, go to the end of the list */
    temp = *head;
    /* start from the first node */
    while ( temp->next != NULL )
    /* loop while not at last node */
    {
        temp = temp->next;
        /* move temp to the next node */
    }

    /* 7. Attach the new node at the end */
    temp->next = new_node;
    /* connect last node to new_node */

    return ( new_node );
    /* return the address of new_node */
}
