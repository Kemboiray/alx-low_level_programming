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
	char *str_temp;
	list_t *newnode, *temp;


	if (str == NULL)
		return (NULL);

	str_temp = strdup(str);

	if (str_temp == NULL)
		return (NULL);

	newnode = malloc(sizeof(list_t));

	if (newnode == NULL)
		return (NULL);

	newnode->str = str_temp;
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
