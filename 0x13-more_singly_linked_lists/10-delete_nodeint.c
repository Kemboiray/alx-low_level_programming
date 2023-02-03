#include "lists.h"
#include "7-get_nodeint.c"

/**
 * delete_nodeint_at_index - deletes the node at index index of a listint_t
 * linked list.
 * @head: pointer to pointer to first node.
 * @index: index of node to be deleted.
 *
 * Return: 1 (success), -1 (failure).
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *temp1;

	if (index == 0)
	{
		if (*head == NULL)
			return (-1);
		temp = (*head)->next;
		free(*head);
		*head = temp;
		return (1);
	}
	temp = get_nodeint_at_index(*head, index - 1);
	if (temp == NULL)
		return (-1);
	temp1 = get_nodeint_at_index(*head, index);
	if (temp1 == NULL)
		return (-1);
	temp->next = temp1->next;
	free(temp1);
	return (1);
}

