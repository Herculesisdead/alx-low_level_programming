#include <stdlib.h>
#include "lists.h"

/**
 * up_free – This frees a linked list
 * @head: This is the freed list_t
 */
void up_free(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
