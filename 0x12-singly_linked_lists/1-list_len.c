#include <stdlib.h>
#include "lists.h"

/**
 * list_len - This will return the total number of elements in a linked list
 * @h: This is a pointer to the list named list_t
 *
 * Return: This will return the number of elements included in 
 */
size_t list_len(const list_t *h)
{
	size_t a = 0;

	while (h)
	{
		a++;
		h = h->next;
	}
	return (a);
}
