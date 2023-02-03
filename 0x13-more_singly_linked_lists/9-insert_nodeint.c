#include "lists.h"

/**
 * insert_nodeint_at_index - inserts node in the nth position of a listint_t
 * list.
 * @head: pointer to the first node.
 * @idx: integer value corresponding to the position of nth node.
 * @n: integer valuewith which to initialise the new node.
 *
 * Return: pointer to inserted node (success) or NULL (failure).
*/
listint_t *insert_nodeint_at_index(listint_t *head, unsigned int idx, int n)
{
	listint_t *temp = head;
	unsigned int i = 0;

	while ((i < index) && temp)
	{
		i++;
		temp = temp->next;
	}
	return (temp);
}
