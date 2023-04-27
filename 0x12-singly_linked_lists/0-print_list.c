#include <stdio.h>
#include "lists.h"

/**
 * print_list - This will print all the elements included in a linked list
 * @h: This is a pointer to the list named list_t to output
 *
 * Return: this will return the no. of nodes outputted
 */
size_t print_list(const list_t *h)
{
	size_t a = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		a++;
	}

	return (a);
}
