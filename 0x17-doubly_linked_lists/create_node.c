#include "lists.h"

/**
 * create_node - create a `dlistint_t` node
 *
 * @n: value to assign to member `n` of the new node
 *
 * Return: node (success), or NULL (failure).
 */
dlistint_t *create_node(const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (!new_node)
		return (NULL);

	new_node->n = (int)n;
	new_node->prev = NULL;
	new_node->next = NULL;

	return (new_node);
}
