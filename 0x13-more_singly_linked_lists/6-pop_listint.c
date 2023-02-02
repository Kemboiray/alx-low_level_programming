#include "lists.h"

/**
 * pop_listint - delete head node after saving a coipy of its contents.
 * @head: pointer to pointer to head node.
 *
 * Return: copy of the integer member of the deleted node, or 0 if node is
 * empty.
*/
int pop_listint(listint_t **head)
{
	int copy;
	listint_t *temp;

	if (*head == NULL)
		return (0);

	copy = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (copy);
}
