#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: pointer to pointer to list
 * @str: pointer to string
 *
 * Return: the address of the new element, or NULL (failure)
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode = malloc(sizeof(list_t));

	if (newnode == NULL)
	{
		/*free(newnode);*/
		return (NULL);
	}
	if ((newnode->str = strdup(str)) == NULL)
	{
		/*free(newnode->str);*/
		return (NULL);
	}
	newnode->len = strlen(newnode->str);
	newnode->next = *head;
	*head = newnode;
	return (newnode);
}
