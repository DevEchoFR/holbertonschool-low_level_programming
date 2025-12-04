#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees a list_t list
 * @head: pointer to the first node of the list
 *
 * Return: nothing
 */

void free_list(list_t *head)
{
	list_t *next_node;   /* temporary pointer to store the next node */

	/* Loop while there are still nodes in the list */
	while (head != NULL)
	{
		/* 1. Save the address of the next node */
		next_node = head->next;

		/* 2. Free the string inside the current node */
		/* (only if it was dynamically allocated, which it was in this project) */
		free(head->str);

		/* 3. Free the current node itself */
		free(head);

		/* 4. Move head to the next node we saved */
		head = next_node;
	}

	/* Optional: after the loop, you know the entire list is freed */

}
