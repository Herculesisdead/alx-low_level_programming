#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node – This adds a node at the start of the linked list
 * @head: double pointer 
 * @str: This is the new string to be added
 *
 * Return: the address of the new element, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int length = 0;

	while (str[length])
		length++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->length = length;
	new->next = (*head);
	(*head) = new;

	return (*head);
}
