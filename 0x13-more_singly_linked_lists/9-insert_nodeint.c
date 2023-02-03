#include "lists.h"
#include "2-add_nodeint.c"
#include "7-get_nodeint.c"
/**
 * insert_nodeint_at_index - inserts node in the nth position of a listint_t
 * list.
 * @head: pointer to the first node.
 * @idx: integer value corresponding to the position of nth node.
 * @n: integer valuewith which to initialise the new node.
 *
 * Return: pointer to inserted node (success) or NULL (failure).
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node, *newnode;

	if (idx == 0)
	{
		newnode = add_nodeint(head, (const int)n);
		return (newnode);
	}
	node = get_nodeint_at_index(*head, idx - 1);
	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = get_nodeint_at_index(*head, idx);
	node->next = newnode;
	return (newnode);
}
