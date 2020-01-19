#include "hash_tables.h"

/**
* key_index - entry point
* @key: const unsigned char variable
* @size: unsigned long int variable
*
* Return: unsigned long int variable
*/

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
