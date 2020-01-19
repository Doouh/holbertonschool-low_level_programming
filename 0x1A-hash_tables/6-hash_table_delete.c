#include "hash_tables.h"

/**
* hash_table_delete - entry point
* @ht: hash_table_t variable
*/

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *aux, *del;

	if (ht == NULL || ht->array == NULL)
		return;
	if (ht->size != 0)
	{
		while (i < ht->size)
		{
			if (ht->array[i] != NULL)
			{
				aux = ht->array[i];
				while (aux)
				{
					del = aux;
					aux = aux->next;
					free(del->value);
					free(del->key);
					free(del);
				}
			}
			i++;
		}
		free(ht->array);
		free(ht);
	}
}
