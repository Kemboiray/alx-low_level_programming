#include "lists.h"
#include "create_node.c"

/**
 * add_dnodeint - adds a new node at the beginning of a `dlistint_t` list
 * @head: address of pointer to head node
 * @n: value to assign to variable `n` in the new node
 *
 * Return: address of the new element (success), or NULL (failure).
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	if (*head == NULL)
	{
		*head = create_node(n);
		return (*head);
	}

	new_node = create_node(n);
	if (!new_node)
		return (NULL);

	new_node->next = *head;
	(*head)->prev = new_node;
	*head = new_node;

	return (new_node);
}
