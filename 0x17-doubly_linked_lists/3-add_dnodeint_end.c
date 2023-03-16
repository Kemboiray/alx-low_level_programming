#include "lists.h"
#include "create_node.c"

/**
 * add_dnodeint_end - adds a new node at the end of a `dlistint_t` list
 * @head: address of pointer to the head node
 * @n: value with which to set the `n` member of the new node
 *
 * Return: address of new node (success), or NULL (failure).
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *end_node, *temp;

	end_node = create_node(n);
	if (!end_node)
		return (NULL);

	if (*head)
	{
		temp = *head;
		while (temp->next)
			temp = temp->next;
		temp->next = end_node;
		end_node->prev = temp;
	}
	else
		*head = end_node;

	return (end_node);
}
