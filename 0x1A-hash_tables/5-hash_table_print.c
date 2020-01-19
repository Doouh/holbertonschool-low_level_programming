#include "hash_tables.h"

/**
 * hash_table_print - entry point
 * @ht: const hash_table_t
*/

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *aux;
	unsigned int i = 0;
	int b = 0;

	if (ht == NULL)
		return;
	printf("{");
	while (i < ht->size)
	{
		aux = ht->array[i];
		while (aux != NULL)
		{
			if (b == 0)
			{
				printf("'%s': '%s'", aux->key, aux->value);
				b = 1;
			}
			else
				printf(", '%s': '%s'", aux->key, aux->value);
			aux = aux->next;
		}
		i++;
	}
	printf("}\n");
}
