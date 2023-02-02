#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of a listint_t list.
 * @head: pointer to pointer to beginning of list.
 * @n: int value with which to initialise the new node's int memberr.
 *
 * Return: address of new element, or NULL (failure).
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp, *newnode;

	newnode = malloc(sizeof(listint_t));

	if (newnode == NULL)
		return (NULL);

	newnode->n = (int)n;
	newnode->next = NULL;
	if (*head == NULL)
		*head = newnode;
	else
	{	temp = *head;
		while (temp->next)
		{
			temp = temp->next;
		}
		temp->next = newnode;
	}

	return (newnode);
}
