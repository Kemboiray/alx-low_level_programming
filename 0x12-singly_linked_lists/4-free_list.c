#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: pointer to head
 *
 * Return: void
*/
void free_list(list_t *head)
{
	void *temp;

	while (temp)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
	/*free(head);*/
}
