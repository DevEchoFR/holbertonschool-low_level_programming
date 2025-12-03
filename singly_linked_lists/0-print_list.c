#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to the head of the list
 *
 * Return: number of nodes in the list
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;
	const list_t *node = h;

    /**
     * Meaning of h = head (start of the list)
     * Meaning of node = the one that moves through the list
     */

    /* Loop through the list */

    while (node != NULL) /* TODO: stop when node is ... */
    {
        if (node->str == NULL) /* TODO: check if node->str is ... */
        {
            printf("[0] (nil)\n"); /* TODO: print: [0] (nil)\n */
        }

        else
        {
            printf("[%u] %s\n", node->len, node->str); /* TODO: print: [len] str\n using node->len and node->str */
        }

        count++; /* TODO: increase the counter (count) */
        node = node->next; /* TODO: move to the next node in the list */
    }

    return (count);	
}