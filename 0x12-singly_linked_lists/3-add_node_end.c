#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end – This adds a new_node to the end of the linked list
 * @head: This is a double pointer to list_t
 * @str: This is a string to input the new_node
 *
 * Return: This is the address new_node or NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *temp_a = *head;
	unsigned int len_str = 0;

	while (str[len_str])
		len_str++;

	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len_str = len_str;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (temp_a->next)
		temp_a = temp_a->next;

	temp_a->next = new_node;

	return (new_node);
}
