/**
 * add_node - This will add a new node to the beginning of the linked list
 * @head: This is a pointer to list_t
 * @str: This is the string to add to the node
 *
 * Return: This will return the address of the new element, or null
 */
list_t *add_node(list_t **head, const char *str)
{
        list_t *new_node;
        unsigned int str_len = 0;

        while (str[str_len])
                str_len++;

        new_node = malloc(sizeof(list_t));
        if (!new_node)
                return (NULL);

        new_node->str = strdup(str);
        new_node->str_len = str_len;
        new_node->next = (*head);
        (*head) = new_node;

        return (*head);
}
