#include "lists.h"
#include <stdlib.h>

feat(dlists): add sum_dlistint (sum node values)

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current = head;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
