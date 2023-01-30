#include "lists.h"

/**
 * list_len - counts the elements of a list_t list
 * @h: pointer to list
 *
 * Return: Number of nodes
*/
size_t list_len(const list_t *h)
{
	size_t n = 0;
	const list_t *ptr = h;

	while (ptr)
	{
/*
*		if ((ptr->str) == NULL)
*			printf("[0] (nil)\n");
*		else
*			printf("[%d] %s\n", ptr->len, ptr->str);
*/		ptr = ptr->next;
		n++;
	}
	return (n);
}
