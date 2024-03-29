#include "lists.h"

/**
 * free_listint2 - frees a listint_t list, setting @head to NULL.
 * @head: pointer to pointer to first node.
 *
 * Return: void.
*/
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;
	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	*head = NULL;
}
