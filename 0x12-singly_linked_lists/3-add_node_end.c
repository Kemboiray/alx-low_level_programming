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
	list_t *newnode, *temp;

	newnode = malloc(sizeof(list_t));
	/*temp = *head;*/

	if (newnode == NULL)
		return (NULL);

	if (str == NULL)
	{
		free(newnode);
		return (NULL);
	}

	newnode->str = strdup(str);

	if ((newnode->str) == NULL)
		return (NULL);

	newnode->len = strlen(newnode->str);
	newnode->next = NULL;

	if (*head == NULL)
		*head = newnode;
	else
	{
		temp = *head;
		while (temp->next)
			temp = temp->next;
		temp->next = newnode;
	}
	return (newnode);
}
