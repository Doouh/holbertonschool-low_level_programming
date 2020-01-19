#include "hash_tables.h"

/**
 * hash_table_get - entry point
 * @ht: const hash_table_t variable
 * @key: const char variable
 *
 * Return: char variable
*/

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	int idx;
	hash_node_t *aux;

	if (ht == NULL || key[0] == '\0')
		return (NULL);

	idx = key_index((unsigned char *)key, ht->size);
	aux = ht->array[idx];

	while (aux != NULL)
	{
		if (strcmp(key, (const char *)aux->key) == 0)
			return (aux->value);
		aux = aux->next;
	}
	return (NULL);
}
