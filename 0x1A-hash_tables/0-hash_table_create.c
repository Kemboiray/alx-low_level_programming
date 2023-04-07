#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of pointer array
 *
 * Return: pointer to created hash table if successful.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t table;
	hash_table_t *ptr;
	unsigned long int i;

	table.size = size;
	table.array = malloc(sizeof(hash_node_t) * size);

	if (table.array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		(table.array)[i] = NULL;

	ptr = &table;
	return (ptr);
}
