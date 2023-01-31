#include "lists.h"

/**
 * add_node - adds a new node at the end of a list_t list
 * @head: pointer to pointer to list
 * @str: pointer to string
 *
 * Return: the address of the new element, or NULL (failure)
*/
list_t *add_node_end(list_t **head, const char *str)
{
/*	char *strbuf = strdup(str);*/
	list_t *temp = *head;
	list_t *newnode = malloc(sizeof(list_t));

/*	if (strbuf == NULL)
	{
		free(strbuf);
		return (NULL);
	}
*/	if (newnode == NULL)
	{
		free(newnode);
		return (NULL);
	}
	else
		while (temp->next)
			temp = temp->next;
	newnode->str = strdup(str);
	newnode->len = strlen(newnode->str);
	newnode->next = NULL;
	temp->next = newnode;
	return (newnode);
}
