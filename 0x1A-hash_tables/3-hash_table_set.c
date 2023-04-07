#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: pointer to hash table
 * @key: key mapping to value
 * @value: value
 *
 * Return: 1 (success) or 0 (failure.)
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node;
	unsigned long int index;

	if (ht == NULL)
		return (0);
	if (key[0] == 0)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);

	new_node->key = (char *)key;
	new_node->value = (char *)value;
	new_node->next = (ht->array)[index];
	(ht->array)[index] = new_node;

	return (1);
}
