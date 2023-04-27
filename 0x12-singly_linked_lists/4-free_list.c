#include <stdlib.h>
#include "lists.h"

/**
 * free_list – This frees a linked list
 * @head: This is the freed list_t
 */
void free_list(list_t *head)
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
