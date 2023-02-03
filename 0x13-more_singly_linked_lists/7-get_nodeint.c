#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t list.
 * @head: pointer to the first node.
 * @index: integer value corresponding to the position of nth node.
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
