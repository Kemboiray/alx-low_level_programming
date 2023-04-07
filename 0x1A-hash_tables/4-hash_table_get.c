#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_get - retrieve the value associated with a key from a hash table
 * @ht: pointer to hash table
 * @key: key
 *
 * Return: value (success) or NULL (failure)
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *temp = NULL;

	index = key_index((const unsigned char *)key, ht->size);
	temp = (ht->array)[index];
	while (temp)
	{
		if ((char *)key == temp->key)
			return (temp->value);
		temp = temp->next;
	}
	return (NULL);
}
