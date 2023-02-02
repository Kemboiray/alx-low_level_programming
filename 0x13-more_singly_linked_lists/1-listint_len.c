#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list.
 * @h: pointer to beginning of list.
 *
 * Return: count of elements.
*/
size_t listint_len(const listint_t *h)
{
	listint_t *temp = (listint_t *)h;
	size_t count = 0;

	while (temp)
	{
		count++;
		temp = temp->next;
	}
	return (count);
}
