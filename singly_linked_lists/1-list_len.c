#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to the head of the list
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
    const list_t *current;
    size_t count;

    /* 1. Initialize current and count */
    current = h;
    count = 0;

    /* 2. Loop through the list */
    while (current != NULL)
    {
        /* 3. Check if current->str is NULL */
        if (current->str == NULL)
        {
            /* print formats "[0] (nil)\n" */
            printf("[0] (nil)\n");
        }
        else
        {
            /* print "[len] str\n" */
            printf("[%u] %s\n", current->len, current->str);
        }

        /* 4. Increase count */
        count++;

        /* 5. Move to next node */
        current = current->next;
    }

    /* 6. Return number of nodes */
    return (count);
}
