#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a linked list
 * @head: list_t list to be freed
 */
void up_free(list_t *head)
{
	list_t *hold;

	while (head)
	{
		hold = head->next;
		up_free(head->str);
		up_free(head);
		head = hold;
	}
}
