#include <stdlib.h>
#include "lists.h"
/**
 * check_cycle - checks if a singly-linked list contains a cycle.
 * @list: a singly-linked list.
 *
 * Return:0 if no cycle otherwise 1
 */

int check_cycle(listint_t *list)
{
	listint_t *head, *tail;

	if (list == NULL || list->next == NULL)
		return (0);

	head = list->next;
	tail = list->next->next;

	while (head && tail && tail->next)
	{
		if (head == tail)
			return (1);

		head = head->next;
		tail = tail->next->next;
	}
	return (0);
}
