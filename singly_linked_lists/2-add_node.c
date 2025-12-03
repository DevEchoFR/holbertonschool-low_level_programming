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
    /* STEP 1: Declare a pointer for the new node and a length counter */
    list_t *new_node;
    unsigned int len = 0;

    /* STEP 2: Count the length of the string str */
    while (str[len])
        len;

    /* STEP 3: Allocate memory for a new list_t node */
    new_node = malloc(sizeof(list_t));

    /* STEP 4: Check if allocation failed */
    if (new_node == NULL)
        return NULL;

    /* STEP 5: Duplicate the string and assign it to the node */
    new_node->str = strdup(str);
    if (new_node->str == NULL)
    {
        /* Free the node if string duplication failed */
        free(new_node);
        return (NULL);
    }

    /* STEP 6: Fill in the rest of the node fields */
    new_node->len = len;      /* the length you counted */
    new_node->next = *head;     /* should point to the old first node */

    /* STEP 7: Make head point to the new node */
    *head = new_node;

    /* STEP 8: Return the address of the new node */
    return new_node;
}
