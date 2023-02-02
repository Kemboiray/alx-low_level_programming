#include "lists.h"

/**
 * get_nodeint -  returns the nth node of a listint_t linked list.
 * @head: pointer to first node.
 * @index: integer value indicating position of subject node.
 *
 * Return: pointer to nth node.
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = head;
	unsigned int i = 0;

	while (i < index)
	{
		if (temp)
		{
			i++;
			temp = temp->next;
		}
	}

	return (temp);
}
