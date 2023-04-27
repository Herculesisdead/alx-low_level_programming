/**
 * add_node - This will add a new node to the beginning of the linked list
 * @head: This is a pointer*2 to list_t
 * @str: This is the string to add to the node
 *
 * Return: This will return the address of the new element, or null
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *one;
	unsigned int length = 0;

	while (str[length])
		length++;

	one = malloc(sizeof(list_t));
	if (!one)
		return (NULL);

	one->str = strdup(str);
	one->length = length;
	one->next = (*head);
	(*head) = one;

	return (*head);
}
