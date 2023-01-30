#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: pointer to pointer to list
 * @str: pointer to string
 *
 * Return: the address of the new element, or NULL (failure)
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode = malloc(sizeof(list_t));
	/*list_t *h = *head;*/

	if (newnode == NULL)
	{
		free(newnode);
		return (NULL);
	}
	else
	while (*head)
		*head = (*head)->next;
	(*head) = newnode;
	newnode->str = strdup(str);
	newnode->len = strlen(newnode->str);
	newnode->next = NULL;
	return (newnode);
}
