#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: pointer to head of list.
 *
 * Return: number of nodes.
*/
size_t print_listint(const listint_t *h)
{
	listint_t *temp = (listint_t *)h;
	size_t node_count = 0;

	while (temp)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		node_count++;
	}

	return (node_count);
}
