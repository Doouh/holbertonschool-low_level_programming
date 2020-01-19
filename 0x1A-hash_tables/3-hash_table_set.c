#include "hash_tables.h"

/**
 * hash_table_set - entry point
 * @ht: hash_table_t variable
 * @key: const char variable
 * @value: const char variable
 *
 * Return: int variable
*/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	int idx;
	hash_node_t *new;

	if (ht == NULL || key[0] == '\0')
		return (0);
	idx = key_index((unsigned char *)key, ht->size);

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);

	new->key = strdup(key);
	new->value = strdup(value);
	new->next = NULL;

	if (ht->array[idx] == NULL)
		ht->array[idx] = new;
	else
	{
		new->next = ht->array[idx];
		ht->array[idx] = new;
	}

	return (1);
}
